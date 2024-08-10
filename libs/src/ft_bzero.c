/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icruces- <ismaelcruc@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 18:37:21 by icruces-          #+#    #+#             */
/*   Updated: 2023/10/21 18:43:08 by icruces-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}
/*
{
	int i;
	char *cast;

	cast = (char *)s;

	i = 0;
	while ((size_t)i <= n)
	{
		cast[i] = 0;
		++i;
	}

}*/
/*
int	main(void)
{
	int


}*/