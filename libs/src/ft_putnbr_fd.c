/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icruces- <ismaelcruc@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 18:02:11 by icruces-          #+#    #+#             */
/*   Updated: 2023/10/18 21:24:37 by icruces-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
void	ft_putchar_fd(char c, int fd)
{
	write (fd, &c, 1);
}
*/
void	ft_putnbr_fd(int n, int fd)
{
	int	num;

	num = n;
	if (n == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return ;
	}
	if (num < 0)
	{
		ft_putchar_fd('-', fd);
		num *= -1;
	}
	if (num < 10)
		ft_putchar_fd(num + '0', fd);
	else
	{
		ft_putnbr_fd((num / 10), fd);
		ft_putnbr_fd((num % 10), fd);
	}
}
/*
int main ()
{
	int i = 90;
	int fd = 1;

	ft_putnbr_fd(i, fd);
	return (0);
}*/
