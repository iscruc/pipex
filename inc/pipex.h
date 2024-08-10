/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pipex.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icruces- <ismaelcruc@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 13:23:27 by icruces-          #+#    #+#             */
/*   Updated: 2024/08/10 18:42:27 by icruces-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PIPEX_H
# define PIPEX_H

# include "libft.h"    // Previous personal library
# include <fcntl.h>    // For open, O_RDONLY, O_WRONLY, O_CREAT, etc.
# include <stdio.h>    // For printf and perror
# include <stdlib.h>   // For exit and EXIT_FAILURE
# include <sys/wait.h> // For waitpid

//int		open_file(const char *filename, int flags);
int main(int argc, char **argv, char **envp);
void	exit_error(char *error);
void create_fork(char *cmd, char **envp, int input_fd, int output_fd);

#endif