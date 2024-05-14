/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aessalih <aessalih@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 10:01:48 by aessalih          #+#    #+#             */
/*   Updated: 2023/11/24 16:16:10 by aessalih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*head;

	head = NULL;
	if (!lst || !f || !del)
		return (NULL);
	while (lst)
	{
		new_list = ft_lstnew(NULL);
		if (new_list == NULL)
		{
			ft_lstclear(&head, del);
			return (NULL);
		}
		new_list->content = f(lst->content);
		ft_lstadd_back(&head, new_list);
		new_list = new_list->next;
		lst = lst->next;
	}
	return (head);
}
