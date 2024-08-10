/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icruces- < icruces-@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 18:53:19 by icruces-          #+#    #+#             */
/*   Updated: 2023/09/19 20:07:32 by icruces-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int	value;

	i = 0;
	sign = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
		{
			sign *= (-1);
		}
		i++;
	}
	value = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		value *= 10;
		value += str[i] - '0';
		i++;
	}
	return (value * sign);
}
/*
int	main(void)
{
	char s[] = "\t\n\r\v\f  469 \n";
	printf("%d\n", ft_atoi(s));
	printf("%d\n", atoi(s));
}*/