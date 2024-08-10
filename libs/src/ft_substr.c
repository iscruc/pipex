/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icruces- <ismaelcruc@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 13:42:57 by icruces-          #+#    #+#             */
/*   Updated: 2023/10/21 23:03:10 by icruces-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;

	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	if (ft_strlen(s + start) < len)
		len = ft_strlen(s + start);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str || !s)
		return (0);
	ft_strlcpy(str, s + start, len + 1);
	return (str);
}

/*
int main (void)
{
	int	st;
	int	ln;

   const char str[] = "bonjour";
   st = 0;
   ln = 10;
   printf("%s\n", ft_substr(str, st, ln));
   //printf("%s\n", strrchr(str, st, ln));
   return(0);
}
*/
