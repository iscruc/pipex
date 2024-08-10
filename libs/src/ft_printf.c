/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icruces- <ismaelcruc@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 17:05:58 by icruces-          #+#    #+#             */
/*   Updated: 2024/07/28 20:32:43 by icruces-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(char const *str, ...)
{
	va_list	ap;
	int		len;

	if (!str)
		return (0);
	va_start(ap, str);
	len = 0;
	if (write(1, "", 0) == -1)
		return (-1);
	while (*str)
	{
		//printf ("len:%d", len);
		if (*str == '%' && (*(str + 1) == 'c' || *(str + 1) == 'd' || *(str
					+ 1) == 's' || *(str + 1) == 'p' || *(str + 1) == 'i'
				|| *(str + 1) == 'u' || *(str + 1) == 'x' || *(str + 1) == 'X'
				|| *(str + 1) == '%'))
		ft_type(++str, &len, ap);
		else
			len += write(1, str, 1);	
		str++;
	}
	va_end(ap);
	return (len);
}

void	ft_type(char const *str, int *len, va_list ap)
{
	if (*str == 's')
		ft_putstr(va_arg(ap, char *), len);
	else if (*str == 'c')
		ft_putchar(va_arg(ap, int), len);
	else if (*str == 'p')
		ft_base_p_format(va_arg(ap, unsigned long), "0123456789abcdef", 1, len);
	else if (*str == 'd' || *str == 'i')
		ft_putnbr_fd_printf(va_arg(ap, int), 1, len, 0);
	else if (*str == 'u')
		ft_putnbr_fd_printf(va_arg(ap, unsigned int), 1, len, 1);
	else if (*str == 'x')
		ft_putnbr_base_fd(va_arg(ap, unsigned int), "0123456789abcdef", 1, len);
	else if (*str == 'X')
		ft_putnbr_base_fd(va_arg(ap, unsigned int), "0123456789ABCDEF", 1, len);
	else if (*str == '%')
		ft_putchar(*str, len);
}
/*
int	main(void)
{
	int		len;
	char	*str;

	str = NULL;
	// ft_printf("%d",ft_printf("printing  c: %s, s: %s\n", str, "12"));
	ft_printf("%d", ft_printf("%s\n", str));
	// printf("printing  c: %s, s: %s\n", str, "12");
}
 */