/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icruces- <ismaelcruc@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 19:50:58 by icruces-          #+#    #+#             */
/*   Updated: 2023/10/21 18:46:13 by icruces-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
strncmp is used to compare two strings up to a specified number
of characters and returns a value indicating their relationship.
*/

#include "libft.h"
#include <string.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*b1;
	unsigned char	*b2;

	b1 = (unsigned char *)s1;
	b2 = (unsigned char *)s2;
	i = 0;
	while (n--)
	{
		if (b1[i] != b2[i] || b1[i] == 0 || b2[i] == 0)
			return (b1[i] - b2[i]);
		i++;
	}
	return (0);
}

/*
	if (!b1 || !b2 || n == 0)
		return (0);
	while (b1[i] == b2[i] && i < (n - 1) && b1[i])
		i++;
	return ((b1[i] - b2[i]));
*/
