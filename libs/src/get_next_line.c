/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icruces- <ismaelcruc@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 18:43:22 by icruces-          #+#    #+#             */
/*   Updated: 2024/03/17 19:09:52 by icruces-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_next_and_rest(char *buffer)
{
	int		i;
	int		j;
	char	*stash;
	int		tot_len;

	i = 0;
	if (!buffer)
		return (NULL);
	while (buffer[i] && buffer[i] != '\n')
		i++;
	tot_len = ft_strlen_gnl(buffer);
	if (buffer[i] == '\n')
		i++;
	if (i == tot_len)
		return (free(buffer), NULL);
	stash = ft_calloc(tot_len - i + 1, sizeof(char));
	if (!stash)
		return (free(buffer), NULL);
	j = 0;
	while (buffer[i])
		stash[j++] = buffer[i++];
	stash[j] = '\0';
	return (free(buffer), stash);
}

char	*ft_line(char *buffer)
{
	int		i;
	char	*line;

	if (!buffer)
		return (NULL);
	i = 0;
	while (buffer[i] && buffer[i] != '\n')
		i++;
	if (buffer[i] == '\n')
		i++;
	if (i == 0)
		return (NULL);
	line = ft_calloc(i + 1, sizeof(char));
	if (!line)
		return (NULL);
	line[i] = '\0';
	i = 0;
	while (buffer[i] && buffer[i] != '\n')
	{
		line[i] = buffer[i];
		i++;
	}
	if (buffer[i] == '\n')
		line[i] = '\n';
	return (line);
}

char	*ft_readfile(int fd, char *stash)
{
	char	*buffer;
	int		buffer_flag;

	buffer_flag = 1;
	buffer = ft_calloc(BUFFER_SIZE + 1, sizeof(char));
	if (!buffer)
		return (free(buffer), NULL);
	while (buffer_flag > 0 && !ft_strrchr(buffer, '\n'))
	{
		buffer_flag = read(fd, buffer, BUFFER_SIZE);
		if (buffer_flag == -1)
			return (free(buffer), free(stash), NULL);
		buffer[buffer_flag] = '\0';
		stash = ft_strjoin_gnl(stash, buffer);
		if (!stash)
			return (free(buffer), NULL);
	}
	return (free(buffer), stash);
}

char	*get_next_line(int fd)
{
	static char	*stash[4096] = {0};
	char		*line;

	if (fd < 0 || BUFFER_SIZE < 1)
		return (NULL);
	stash[fd] = ft_readfile(fd, stash[fd]);
	if (!stash[fd])
		return (NULL);
	line = ft_line(stash[fd]);
	if (!line)
		return (free(stash[fd]), NULL);
	stash[fd] = ft_next_and_rest(stash[fd]);
	return (line);
}

/* int	main(void)
{
	int	fd;

	fd = open("hello.txt", 0);
	printf("%s\n", get_next_line(fd));
	return (0);
} */
