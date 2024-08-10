/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icruces- < icruces-@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 17:19:16 by icruces-          #+#    #+#             */
/*   Updated: 2023/09/23 17:19:50 by icruces-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
			return ((char *)(s + i));
		i++;
	}
	if ((char)c == '\0')
		return ((char *)(s + i));
	return (0);
}
/*
int main ()
{
   const char str[] = "https://www.tutorialspoint.com";
   const char ch = '.';
   char *ret;

   ret = ft_strchr(str, ch);

   printf("%s\n", ft_strchr(str, ch));

   return(0);
}*/