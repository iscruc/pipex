/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icruces- < icruces-@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 19:06:18 by icruces-          #+#    #+#             */
/*   Updated: 2024/03/20 19:19:44 by icruces-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <fcntl.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

char	*ft_strjoin_gnl(char *str1, char *str2);
/**
 * @brief Allocates memory for an array of `count` elements of `size` bytes each and initializes all bytes in the allocated storage to zero.
 *
 * @param count Number of elements to allocate.
 * @param size Size of each element in bytes.
 * @return A pointer to the allocated memory, or NULL if the allocation fails.
 */
void	*ft_calloc(size_t count, size_t size);
/**
 * @brief Finds the last occurrence of the character `c` in the string `s`.
 *
 * @param s The string to be searched.
 * @param c The character to search for. The value is cast to an unsigned char.
 * @return A pointer to the located character, or NULL if the character does not appear in the string.
 */
char	*ft_strrchr(const char *s, int c);
/**
 * @brief Calculates the length of the string `str`, specifically designed for use in the `get_next_line` function.
 *
 * @param str The string whose length is to be calculated.
 * @return The length of the string.
 */
int		ft_strlen_gnl(const char *str);
/**
 * @brief Extracts a line from the `buffer`. A line is defined as a sequence of characters terminated by '\n' (newline) or EOF (end of file).
 *
 * @param buffer The buffer containing the text data from which to extract the line.
 * @return The extracted line from the buffer, or NULL if allocation fails.
 */
char	*ft_line(char *buffer);	
/**
 * @brief Determines the next part of the buffer after the current line and keeps the rest for further reading.
 *
 * @param buffer The current buffer from which the line has been read.
 * @return The rest of the buffer after the current line, or NULL if there is no more content to read.
 */
char	*ft_next_and_rest(char *buffer);
/**
 * @brief Reads a line from a file descriptor. If called multiple times, continues reading the file descriptor from where it left off until EOF.
 *
 * @param fd The file descriptor to read from.
 * @return The line that was read. NULL is returned if there is nothing else to read, or if an error occurs.
 */
char	*get_next_line(int fd);
/**
 * @brief Reads the file associated with `fd` into `stash` until a newline character is encountered.
 *
 * @param fd The file descriptor to read from.
 * @param stash The buffer where the content is accumulated.
 * @return The updated stash with the newly read content, or NULL if an error occurs.
 */
char	*ft_readfile(int fd, char *stash);



# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 10
# endif

#endif