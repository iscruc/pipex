/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icruces- <ismaelcruc@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 14:56:36 by icruces-          #+#    #+#             */
/*   Updated: 2023/10/01 10:19:58 by icruces-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
int	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}
*/
char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	char	*str_cp;

	str_cp = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!str_cp)
		return (0);
	j = 0;
	i = 0;
	while (s1[i])
	{
		str_cp[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		str_cp[i + j] = s2[j];
		j++;
	}
	str_cp[i + j] = '\0';
	return (str_cp);
}
/*
int	main(void)
{

	char s1[] = "queso ";
	char s2[] = "esto es una prueba";

	printf("%s\n", ft_strjoin(s1, s2));
	//printf("%s\n", memcpy(dst, src));

	return(0);
}*/