/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fork.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icruces- <ismaelcruc@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/04 22:51:03 by icruces-          #+#    #+#             */
/*   Updated: 2024/08/10 21:22:04 by icruces-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

char **get_path(char **envp)
{
    char *path;
    char **path_matrix;
    
    path = NULL;
    while (*envp)
    {
        if (ft_strncmp(*envp, "PATH=", 5) == 0)
        {
            path = (*envp) + 5;
            break;
        }
        envp++;
    }
    if(!path)
        exit_error("Couldn't find path");
    
    path_matrix = ft_split(path, ':');
    return (path_matrix);

}

void execute_command(char *cmd, char **envp)
{
    char **args;
    int i; 
    char **path_matrix;
    char *path_cmd;

    i =0;
    args = ft_split(cmd, ' ');
    dprintf (2, "start excecute print matrix\n");
/*     while (args[i])
    {
        dprintf(2, "args:%s \n", args[i]);
        i++;
    } */
   
    path_matrix = get_path(envp);
    while (path_matrix[i])
    {
        path_cmd = ft_strjoin(ft_strjoin(path_matrix[i], "/"), args[0]);
        //dprintf(2, "%s\n", path_cmd);
        if (!access(path_cmd , X_OK))
            break ;
        free(path_cmd);
        i++;
    }
    free_path (path_matrix);
    if (execve(path_cmd, args, envp) == -1)
        exit_error("Couldn't excute command\n");
}

void create_fork(char *cmd, char **envp, int input_fd, int output_fd)
{
    pid_t pid;
    
    pid = fork();
    
    if (pid == -1)
        exit_error("Couldn't create fork");
    else if (pid == 0)
    {
        dprintf (2, "before dup2\n");
        
        dup2(input_fd, STDIN_FILENO);
        dup2(output_fd, STDOUT_FILENO);
        execute_command(cmd, envp);
    }
}

