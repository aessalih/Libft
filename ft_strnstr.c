/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aessalih <aessalih@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 14:00:09 by aessalih          #+#    #+#             */
/*   Updated: 2023/11/25 10:14:59 by aessalih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;

	if (*needle == '\0')
		return ((char *)haystack);
	if (*haystack == '\0' || ft_strlen(haystack) < ft_strlen(needle))
		return (0);
	while (haystack && len)
	{
		i = 0;
		while (i < len && *(needle + i) && *(haystack + i) == *(needle + i))
			i++;
		if (*(needle + i) == '\0')
			return ((char *)haystack);
		haystack++;
		len--;
	}
	return (0);
}
