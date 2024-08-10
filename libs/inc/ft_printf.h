/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icruces- < icruces-@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 17:06:02 by icruces-          #+#    #+#             */
/*   Updated: 2024/03/24 11:23:33 by icruces-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>


void		ft_type(char const *str, int *len, va_list ap);
void		ft_putchar(char str, int *len);
void		ft_putnbr_fd_printf(int n, int fd, int *len, int is_unsigned);
void		ft_putnbr_base_fd(unsigned long n, char *base, int fd, int *len);
void		ft_putstr(char const *str, int *len);
void		ft_base_p_format(unsigned long n, char *base, int fd, int *len);
int			ft_printf(char const *str, ...);
#endif
