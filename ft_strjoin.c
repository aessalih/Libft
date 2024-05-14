/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aessalih <aessalih@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 19:03:01 by aessalih          #+#    #+#             */
/*   Updated: 2023/11/19 13:01:11 by aessalih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	char	*ptr;

	i = 0;
	j = 0;
	if (!s1 && !s2)
		return (NULL);
	ptr = (char *) malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	while (s1[i])
	{
		*(char *)(ptr + i) = *(char *)(s1 + i);
		i++;
	}
	while (s2[j])
	{
		*(char *)(ptr + i + j) = *(char *)(s2 + j);
		j++;
	}
	ptr[i + j] = '\0';
	return (ptr);
}
