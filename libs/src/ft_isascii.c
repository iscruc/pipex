/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icruces- < icruces-@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 17:41:16 by icruces-          #+#    #+#             */
/*   Updated: 2023/09/23 17:19:27 by icruces-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_isascii(int str)
{
	if (str >= 0 && str <= 127)
	{
		return (1);
	}
	else
		return (0);
}
/*
int	main(void)
{
	int	phr;

	phr = 'ç';
	printf("%d\n", ft_isascii(phr));
	return (0);
}
*/