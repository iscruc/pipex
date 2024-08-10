/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icruces- < icruces-@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 22:18:57 by icruces-          #+#    #+#             */
/*   Updated: 2023/09/21 22:37:09 by icruces-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*ft_calloc(size_t count, size_t size)
{
	size_t	tot;
	void	*p;

	if (count == 0 || size == 0)
	{
		count = 1;
		size = 1;
	}
	tot = count * size;
	p = malloc(tot);
	if (p == 0)
		return (0);
	else
		ft_bzero(p, tot);
	return (p);
}
/*
int	main(void)
{
	int count;
	int size;

	count = 20;
	size = sizeof(int);

	printf("%s\0", ft_calloc(count, size));
}*/