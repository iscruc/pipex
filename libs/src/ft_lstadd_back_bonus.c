/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icruces- <ismaelcruc@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/15 15:39:50 by icruces-          #+#    #+#             */
/*   Updated: 2023/10/21 22:21:15 by icruces-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

t_list	*ft_lstnew(void *content)
{
	t_list	*sending;

	if (!(sending = (t_list *)malloc(sizeof(t_list))))
		return (0);
	sending->content = content;
	sending->next = 0;
	return (sending);
}
t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (0);
	while (lst)
	{
		lst = lst->next;
	}
	return (lst);
}
void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst)
		return ;
	if (!del)
		return ;
	(*del)(lst->content);
	free(lst);
}
void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*current;
	t_list	*next;

	if (!lst || !del || !*lst)
		return ;
	current = *lst;
	while (current)
	{
		next = current->next;
		ft_lstdelone(current, del);
		current = next;
	}
	*lst = NULL;  // Update the pointer to the list
}
*/

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*tmp;

	if (!lst || !new)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	tmp = ft_lstlast(*lst);
	tmp->next = new;
}
/*
int	main(void)
{
	t_list	*list;
	t_list	*node1;
	t_list	*node2;
	t_list	*node3;
	t_list	*current;

	list = NULL;
	// Create some nodes for the list
	node1 = ft_lstnew("Node 1");
	node2 = ft_lstnew("Node 2");
	node3 = ft_lstnew("Node 3");
	// Add nodes to the end of the list
	ft_lstadd_back(&list, node1);
	ft_lstadd_back(&list, node2);
	ft_lstadd_back(&list, node3);
	// Print the list to verify
	current = list;
	while (current)
	{
		printf("%s\n", (char *)(current->content));
		current = current->next;
	}
	// Don't forget to free the list when done
	ft_lstclear(&list, free);
	return (0);
}
*/