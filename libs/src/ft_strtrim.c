/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icruces- <ismaelcruc@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 16:42:17 by icruces-          #+#    #+#             */
/*   Updated: 2023/10/21 22:35:58 by icruces-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

/*
size_t	ft_strlen(const char *s)
{
	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

size_t	ft_strlcpy(char *restrict dst, const char *restrict src, size_t dstsize)
{
	unsigned int	cnt;
	unsigned int	cont_src;

	cont_src = ft_strlen(src);
	cnt = 0;
	if (dstsize == 0)
	{
		return (cont_src);
	}
	while (src[cnt] && cnt < (dstsize - 1))
	{
		dst[cnt] = src[cnt];
		++cnt;
	}
	dst[cnt] = '\0';
	return (cont_src);
}
char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
			return ((char *)(s + i));
		i++;
	}
	if ((char)c == '\0')
		return ((char *)(s + i));
	return (0);
}*/

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	char	*str;

	str = 0;
	i = 0;
	j = ft_strlen(s1);
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	while (s1[j - 1] && ft_strchr(set, s1[j - 1]) && j > i)
		j--;
	str = malloc(sizeof(char) * (j - i + 1));
	if (!str)
		return (0);
	ft_strlcpy(str, &s1[i], (j - i + 1));
	return (str);
}
/*
int	main(void)
{
	int	i;

	char phr1[] = " xx  i x434342x x";
	char phr2[] = " x";
	printf("%s\n", ft_strtrim(phr1, phr2));
	// printf("%s\n", strnstr(phr1, phr2));
}*/
