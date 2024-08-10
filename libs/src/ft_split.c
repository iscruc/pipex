/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icruces- <ismaelcruc@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 19:15:24 by icruces-          #+#    #+#             */
/*   Updated: 2023/10/21 18:52:24 by icruces-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_free(char *strs)
{
	int	i;

	i = 0;
	while (strs[i])
	{
		free(strs);
		i++;
	}
	free(strs);
}

static int	ft_wordcount(char *str, char c)
{
	int	i;
	int	word;

	i = 0;
	word = 0;
	while (str[i])
	{
		while (str[i] == c)
			i++;
		if (str[i] != c && str[i] != '\0')
			word++;
		while (str[i] != c && str[i] != '\0')
			i++;
	}
	return (word);
}

static char	*ft_strcpy(char *word, char *str, char c, int pos_wrd)
{
	int	i;

	i = 0;
	if (str[pos_wrd] == c && str[pos_wrd])
		pos_wrd++;
	while (str[i + pos_wrd] != c && str[i + pos_wrd])
	{
		word[i] = str[i + pos_wrd];
		i++;
	}
	word[i] = '\0';
	return (word);
}

static char	*ft_stralloc(char *str, char c, int *pos_tot)
{
	char	*word;
	int		len;

	word = 0;
	len = 0;
	while (str[*pos_tot])
	{
		if (str[*pos_tot] != c)
		{
			while (str[*pos_tot] && str[*pos_tot] != c)
			{
				len++;
				(*pos_tot)++;
			}
			word = (char *)malloc(sizeof(char) * (len + 1));
			if (!word)
				return (0);
			break ;
		}
		*pos_tot = *pos_tot + 1;
	}
	ft_strcpy(word, str, c, *pos_tot - len);
	return (word);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	char	**strs;
	int		pos;

	j = ft_wordcount((char *)s, c);
	strs = (char **)malloc(sizeof(char *) * (j + 1));
	if (!strs)
		return (0);
	i = 0;
	pos = 0;
	while (i < j)
	{
		strs[i] = ft_stralloc((char *)s, c, &pos);
		if (strs[i] == 0)
		{
			ft_free(strs[i]);
		}
		i++;
	}
	strs[i] = NULL;
	return (strs);
}
/*
void	leaks(void)
{
	system("leaks ft_split");
}

int	main(void)
{
	char const str[] = "esto es un test";
	char c = ' ';
	int i = 0;
	char **strs = ft_split(str, c);
	while (strs[i] != NULL)
	{
		printf("%s\n", strs[i]);
		i++;
	}
	leaks();
	return (0);
}*/