/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icruces- <ismaelcruc@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 16:49:05 by icruces-          #+#    #+#             */
/*   Updated: 2024/07/20 12:33:40 by icruces-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_base_p_format(unsigned long n, char *base, int fd, int *len)
{
	*len += write(1, "0x", 2);
	ft_putnbr_base_fd(n, base, fd, len);
}

void	ft_putchar(char str, int *len)
{
	*len += write(1, &str, 1);
}

void	ft_putnbr_fd_printf(int n, int fd, int *len, int is_unsigned)
{
	unsigned int	num;

	if (is_unsigned)
	{
		num = (unsigned int)n;
	}
	else
	{
		num = n;
		if (n < 0)
		{
			ft_putchar('-', len);
			num = -n;
		}
	}
	if (num < 10)
		ft_putchar((char)(num + '0'), len);
	else
	{
		ft_putnbr_fd_printf((num / 10), fd, len, is_unsigned);
		ft_putnbr_fd_printf((num % 10), fd, len, is_unsigned);
	}
}

void	ft_putnbr_base_fd(unsigned long n, char *base, int fd, int *len)
{
	unsigned long	num;
	unsigned long	base_len;

	base_len = 0;
	while (base[base_len])
		base_len++;
	num = n;
	if (num < base_len)
		ft_putchar(base[num], len);
	else
	{
		ft_putnbr_base_fd((num / base_len), base, fd, len);
		ft_putnbr_base_fd((num % base_len), base, fd, len);
	}
}

void	ft_putstr(char const *str, int *len)
{
	if (!str)
	{
		*len += write(1, "(null)", 6);
		return ;
	}
	while (*str)
	{
		*len += write(1, str, 1);
		str++;
	}
}
