/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icruces- <ismaelcruc@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 19:04:36 by icruces-          #+#    #+#             */
/*   Updated: 2023/10/22 00:16:32 by icruces-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}
*/
char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s);
	while (i >= 0)
	{
		if (s[i] == (char)c)
			return ((char *)s + i);
		i--;
	}
	if (c == 0)
		return ((char *)s + i);
	return (0);
}
/*
int main (void)
{
   const char str[] = "bonjour";
   int ch = '.';
   char *ret;

   ret = ft_strrchr(str , ch);

   printf("%s\n", ft_strrchr(str, ch));
   printf("%s\n", strrchr(str, ch));

   return(0);
}*/