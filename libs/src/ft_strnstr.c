/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icruces- <ismaelcruc@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 19:49:26 by icruces-          #+#    #+#             */
/*   Updated: 2023/10/21 18:46:17 by icruces-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//#include <string.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (needle[0] == '\0')
		return ((char *)haystack);
	while (haystack[i] != '\0' && i < len)
	{
		j = 0;
		while (haystack[i + j] == needle[j] && i + j < len)
		{
			j++;
			if (needle[j] == '\0')
				return ((char *)&haystack[i]);
		}
		i++;
	}
	return (0);
}

/*
char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (needle[0] == '\0')
		return((char*)haystack);
	while (haystack[i] != '\0' && i < len)
	{
		j = 0;
		while (haystack[i] == needle[j])
		{
			j++;
			if ((int)j == ft_strlen((char *)needle) || len == j)
				return ((char *)(&haystack[i - (j - 1)]));
			i++;
		}
		i -= j;
		i++;
	}
	return (0);
}

int	main(void)
{
	char	phr1[] = "xi434342";
	char	phr2[] = "x";
	int 	n;

	n = '2';
	printf("%s\n", ft_strnstr(phr1, phr2, n));
	printf("%s\n", strnstr(phr1, phr2, n));

}*/