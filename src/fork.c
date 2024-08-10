/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fork.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icruces- <ismaelcruc@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/04 22:51:03 by icruces-          #+#    #+#             */
/*   Updated: 2024/08/10 17:50:52 by icruces-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

/* void child_process(char **argv, char **envp, int *fd)
{
    int infile;
    
    close (fd[0]);
    infile = open_file(argv[1], O_RDONLY);
    
    
} */

int create_fork(char *cmd, char **envp, int input_fd, int output_fd)
{
    pid_t pid;
    
    pid = fork();
    
    if (pid == -1)
        error_exit("Couldn't create fork");
    else if (pid == 0)
    {
        dup2(input_fd, STDOUT_FILENO);
        dup2(output_fd, STDOUT_FILENO);
        execute_command(cmd, envp);
    }
    
}

