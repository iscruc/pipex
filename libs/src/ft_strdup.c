/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icruces- <ismaelcruc@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 12:23:06 by icruces-          #+#    #+#             */
/*   Updated: 2023/10/12 21:32:03 by icruces-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//#include <stdio.h>
//#include <stdlib.h>

char	*ft_strdup(const char *s1)
{
	int		i;
	char	*str;
	int		s1_len;

	i = 0;
	s1_len = ft_strlen(s1);
	if (!s1)
		return (0);
	str = (char *)malloc(sizeof(char) * (s1_len + 1));
	if (!str)
		return (0);
	while (i < s1_len)
	{
		str[i] = s1[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
/*
int	main(void)
{
	char str[]= "this is a test";

	printf("%s\n", ft_strdup(str));

}*/