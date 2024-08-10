/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icruces- < icruces-@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 16:55:10 by icruces-          #+#    #+#             */
/*   Updated: 2023/09/18 21:22:22 by icruces-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;
	char	*conv_src;
	char	*conv_dst;

	conv_src = (char *)src;
	conv_dst = (char *)dst;
	i = 0;
	if (!dst && !src)
		return (0);
	while (i < n)
	{
		conv_dst[i] = conv_src[i];
		i++;
	}
	return (conv_dst);
}
/*
int	main(void)
{
	int size;

	size = 4;
	char src[] = "queso";
	char dst[] = "esto es una prueba";

	printf("%s\n", ft_memcpy(dst, src, size));
	printf("%s\n", memcpy(dst, src, size));

	return(0);
}*/