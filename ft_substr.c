/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aessalih <aessalih@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 18:05:59 by aessalih          #+#    #+#             */
/*   Updated: 2023/11/24 21:31:52 by aessalih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	msize;
	char	*ptr;

	i = 0;
	msize = 0;
	if (!s)
		return (NULL);
	if (!len || start > ft_strlen(s))
		return (ft_strdup(""));
	if (ft_strlen(s) < (len + start))
		msize = ft_strlen(s) - start;
	else if (ft_strlen(s) >= (len + start))
		msize = len;
	ptr = malloc((msize + 1) * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	while (s[start] && i < len)
	{
		*(char *)(ptr + i) = *(char *)(s + start);
		start++;
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
