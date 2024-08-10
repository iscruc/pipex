/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icruces- <ismaelcruc@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 18:23:50 by icruces-          #+#    #+#             */
/*   Updated: 2023/10/21 22:39:23 by icruces-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static char	*ft_writer(char *result, int number, int n)
{
	if (n < 0)
	{
		result[0] = '-';
		n = -n;
	}
	while (n > 0)
	{
		result[number] = '0' + (n % 10);
		n /= 10;
		number--;
	}
	return (result);
}

static int	ft_sizecount(int num)
{
	int	count;

	count = 0;
	if (num == 0)
		return (1);
	if (num < 0)
	{
		count++;
		num = -num;
	}
	while (num != 0)
	{
		num /= 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	char	*result;
	int		size;

	size = ft_sizecount(n);
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	result = (char *)malloc(sizeof(char) * (size + 1));
	if (!result)
		return (0);
	result[size--] = '\0';
	if (n == 0)
		result[0] = '0';
	result = ft_writer(result, size, n);
	return (result);
}
/*
int	main(void)
{
	int	num;

	num = 0;
	printf("%s\n", ft_itoa(num));
}

char	*ft_itoa(int n)
{
	int	str;

	while (n)
	{
		i *= 10;
		n = n + '0';
	}
}

int main (int argc, char *argv)
{

	ft_itoa(argv);
}*/