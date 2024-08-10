/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icruces- <ismaelcruc@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 13:27:09 by icruces-          #+#    #+#             */
/*   Updated: 2024/08/10 17:51:13 by icruces-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

/* int open_file(const char *filename, int flags, mode_t mode)
{
    int fd;
    
    fd = open(filename, flags);
    if (fd < 0)
    {
        perror("Error opening file");
        exit(EXIT_FAILURE);
    }
    return (fd);
} */



void	exit_error(char *error)
{
	perror(error);
	exit(EXIT_FAILURE);
}