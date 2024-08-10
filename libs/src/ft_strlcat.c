/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icruces- < icruces-@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 15:56:45 by icruces-          #+#    #+#             */
/*   Updated: 2023/09/21 21:38:10 by icruces-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//#include <string.h>
//#include <stdio.h>
// concatenate the string to an specific size.

/*
int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}
*/
size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (dst[i] && i < size)
		i++;
	while (src[j] && (i + j + 1) < size)
	{
		dst[i + j] = src[j];
		j++;
	}
	if (i < size)
		dst[i + j] = '\0';
	return (i + ft_strlen(src));
}

/*

{
	unsigned int	i;
	unsigned int	j;
	size_t	dsize;
	size_t	ssize;
	char *cast_src;

	i = 0;
	j = 0;
	cast_src = (char *)src;
	while (dest[i] != '\0' && i < size)
		i++;
	dsize = i;
	ssize = ft_strlen(cast_src);
	if (size == 0)
		return (dsize + size);
	while (cast_src[j] != '\0' && (i + 1) < (size))
	{
		dest[i] = cast_src[j];
		j++;
		i++;
	}
	if (dsize < size)
		dest[i] = '\0';
	return (dsize + ssize);
}

int	main(void)
{
	char	phr1[];
	char	phr2[];

	phr1[] = "a";
	phr2[] = "lorem ipsum dolor sit amet";
	//printf("%u\n", ft_strlcat(phr1, phr2, n));
	//printf("%lu\n", strlcat(phr1, phr2, 15));
	printf("%zu\n", ft_strlcat(phr1, phr2, 15));
	//printf("%s\n", phr1);
}
*/