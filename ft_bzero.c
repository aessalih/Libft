/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aessalih <aessalih@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 20:10:42 by aessalih          #+#    #+#             */
/*   Updated: 2023/11/23 20:57:56 by aessalih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned int	i;

	i = 0;
	while (i < n)
	{
		*(unsigned char *)(s + i) = '\0';
		i++;
	}
}
