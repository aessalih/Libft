/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aessalih <aessalih@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 07:15:59 by aessalih          #+#    #+#             */
/*   Updated: 2023/11/25 10:15:33 by aessalih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int i)
{
	unsigned char	c;

	c = (unsigned char) i;
	if (c >= 'a' && c <= 'z')
	{
		c = c - 32;
		return (c);
	}
	return (i);
}
