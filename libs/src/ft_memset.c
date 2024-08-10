/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icruces- <ismaelcruc@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 17:42:00 by icruces-          #+#    #+#             */
/*   Updated: 2023/10/21 18:45:17 by icruces-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	int		n;
	char	*new;

	new = (char *)b;
	n = 0;
	while ((size_t)n < len)
	{
		new[n] = c;
		++n;
	}
	return ((void *)new);
}
/*
int	main(void)
{
	int		n;
	char	phr[];
	int		j;
	char	*arr;

	phr[] = "Esto es una phrase";
	j = '*';
	n = 3;
	*new[n] == new[n][0];
	hay que castear
	printf("%s\n",ft_memset(phr, j, n));
	printf("%s\n", memset(phr, j, n));
	printf("%s/n", phr);
	return(0);
	arr = "Hola";
	*(arr + n) == arr[n];
	(char *) => *(char *) => (char)
	(char) => &(char) => (char *)
	(int **) => (int **)[0][1] => (int *)[1] => (int)
}
*/