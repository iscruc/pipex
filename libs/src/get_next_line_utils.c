/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icruces- <ismaelcruc@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 20:18:03 by icruces-          #+#    #+#             */
/*   Updated: 2024/03/17 22:39:55 by icruces-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"


static int	ft_bzero(void *s, size_t n)
{
	unsigned char	*p;

	p = s;
	while (n--)
		*p++ = 0;
	return (0);
}

void	*ft_calloc(size_t count, size_t size)
{
	void	*p;

	p = malloc(count * size);
	if (!p)
		return (0);
	ft_bzero(p, count * size);
	return (p);
}

int	ft_strlen_gnl(const char *str)
{
	int	i;

	if (!str)
		return (0);
	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	if (!s)
		return (NULL);
	i = ft_strlen_gnl(s);
	while (i >= 0)
	{
		if (s[i] == (char)c)
			return ((char *)s + i);
		i--;
	}
	return (NULL);
}

char	*ft_strjoin_gnl(char *str1, char *str2)
{
	char	*str3;
	int		len;
	int		i;
	int		j;

	len = ft_strlen_gnl(str1) + ft_strlen_gnl(str2);
	if (len == 0)
		return (NULL);
	str3 = ft_calloc(len + 1, sizeof(char));
	if (!str3)
		return (free(str1), NULL);
	i = 0;
	while (str1 && str1[i])
	{
		str3[i] = str1[i];
		i++;
	}
	j = 0;
	while (str2 && str2[j])
		str3[i++] = str2[j++];
	str3[i] = '\0';
	return (free(str1), str3);
}
