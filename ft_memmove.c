/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aessalih <aessalih@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 09:52:45 by aessalih          #+#    #+#             */
/*   Updated: 2023/11/23 22:51:50 by aessalih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*dest;
	char	*sc;

	dest = (char *)dst;
	sc = (char *)src;
	if (dst > src)
	{
		while (len--)
			dest[len] = sc[len];
	}
	else
		dest = ft_memcpy(dest, sc, len);
	return (dest);
}
