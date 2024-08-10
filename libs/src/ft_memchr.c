/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icruces- <ismaelcruc@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 21:45:52 by icruces-          #+#    #+#             */
/*   Updated: 2023/10/18 23:32:24 by icruces-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	char	*chr_s;

	i = 0;
	chr_s = (char *)s;
	while (i < n)
	{
		if ((unsigned char)chr_s[i] == (unsigned char)c)
			return ((char *)&chr_s[i]);
		i++;
	}
	return (0);
}
/*
int	main(void)
{
	char s1[] = "es3to es un test";
	char s2 = 't';
	int num = 6;

	printf("%s\n", ft_memchr(s1, s2, num));
	printf("%s\n", memchr(s1, s2, num));
	return (0);
}*/