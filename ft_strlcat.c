/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aessalih <aessalih@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 19:30:18 by aessalih          #+#    #+#             */
/*   Updated: 2023/11/25 10:14:40 by aessalih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dstlen;
	size_t	srclen;
	size_t	nsize;
	size_t	i;

	dstlen = ft_strlen(dst);
	srclen = ft_strlen(src);
	i = 0;
	nsize = srclen + dstlen;
	if (dstlen >= size)
		nsize = srclen + size;
	else
	{
		while (i < (size - dstlen - 1) && src[i])
		{
			*(dst + (dstlen + i)) = *(char *)(src + i);
			i++;
		}
		*(dst + (dstlen + i)) = '\0';
	}
	return (nsize);
}
