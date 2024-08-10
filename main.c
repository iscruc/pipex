/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icruces- <ismaelcruc@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 13:25:18 by icruces-          #+#    #+#             */
/*   Updated: 2024/08/10 19:51:15 by icruces-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

int main(int argc, char **argv, char **envp)
{
    int infile;
    int outfile;
    int pipe_fd[2];

    if (argc != 5)
        exit_error("Error in num of arguments \nCorrect usage: ./pipex file1 cmd1 cmd2 file2");
    else
    {
        dprintf (2, "test inside else\n");
        infile = open(argv[1], O_RDONLY);  
        if (infile == -1)
            exit_error("Failed to open input file");    
        outfile = open(argv[4], O_WRONLY | O_CREAT | O_TRUNC, 0644);
        if (outfile == -1)
            exit_error("Failed to open output file");
        if (pipe(pipe_fd) == -1)
            exit_error("Failed to create pipe");
        create_fork(argv[2], envp, infile, pipe_fd[1]);
        close(pipe_fd[1]);
        create_fork(argv[3], envp, pipe_fd[0], outfile);
        close(pipe_fd[0]);
    
        wait(NULL);
           dprintf (2, "after wait\n");
    }
    return(0);
}
