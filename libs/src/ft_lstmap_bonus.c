/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icruces- < icruces-@student.42malaga.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/21 23:21:27 by icruces-          #+#    #+#             */
/*   Updated: 2023/10/23 19:12:28 by icruces-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_node;
	t_list	*new_list;

	if (!f || !del)
		return (0);
	new_list = NULL;
	while (lst)
	{
		new_node = ft_lstnew(NULL);
		if (new_node == NULL)
		{
			ft_lstclear(&lst, del);
			return (NULL);
		}
		new_node->content = (*f)(lst->content);
		ft_lstadd_back(&new_list, new_node);
		lst = lst->next;
	}
	return (new_list);
}
