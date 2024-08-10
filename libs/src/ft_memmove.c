/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icruces- <ismaelcruc@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 19:46:55 by icruces-          #+#    #+#             */
/*   Updated: 2023/10/21 20:07:56 by icruces-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	char	*c_dst;
	char	*c_src;

	c_dst = (char *)dst;
	c_src = (char *)src;
	if ((!dst && !src) || src > dst)
		ft_memcpy(dst, src, len);
	else
	{
		i = len;
		while (i-- > 0)
		{
			c_dst[i] = c_src[i];
		}
	}
	return (dst);
}
/*
int	main(void)
{
	char	dst[];
	char	src[];
	int		len;

	dst[] = "123456";
	src[] = "Hello, World!";
	len = 3;
	printf("%s\n", ft_memmove(dst, src, len));
	printf("%s\n", memmove(dst, src, len));
}
*/