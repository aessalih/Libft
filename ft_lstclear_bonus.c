/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aessalih <aessalih@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 10:02:23 by aessalih          #+#    #+#             */
/*   Updated: 2023/11/18 10:52:39 by aessalih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*current;
	t_list	*fordel;

	if (!lst || !del)
		return ;
	current = *lst;
	while (current)
	{
		fordel = current;
		current = current->next;
		del(fordel->content);
		free(fordel);
	}
	*lst = NULL;
}
