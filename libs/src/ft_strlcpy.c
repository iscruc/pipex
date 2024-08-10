/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icruces- < icruces-@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 15:36:17 by icruces-          #+#    #+#             */
/*   Updated: 2023/10/11 20:49:19 by icruces-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	cnt;
	size_t	cont_src;

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

/*
int	main(void)
{
	char	dest;
	char	*p;
	int		size;

	char src[]="I want to sleep a little siesta";
	size = 0;
	p = &dest;
	printf("%zu\n", ft_strlcpy(&dest, src, size));
	printf("%s\n", p);
}
*/