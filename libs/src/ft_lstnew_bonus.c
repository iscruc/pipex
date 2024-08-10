/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icruces- <ismaelcruc@gmail.com>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/11 18:51:20 by icruces-          #+#    #+#             */
/*   Updated: 2023/10/21 22:37:51 by icruces-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*sending;

	sending = (t_list *)malloc(sizeof(*sending));
	if (!sending)
		return (0);
	sending->content = content;
	sending->next = 0;
	return (sending);
}
