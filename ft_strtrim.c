/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aessalih <aessalih@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 19:25:28 by aessalih          #+#    #+#             */
/*   Updated: 2023/11/23 22:53:48 by aessalih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*ptr;
	int		i;
	int		j;
	int		k;

	i = 0;
	j = ft_strlen(s1) - 1;
	k = 0;
	if (!s1 || !set)
		return (NULL);
	while (ft_strchr(set, s1[i]) && s1[i])
		i++;
	while (j > i && ft_strchr(set, s1[j]))
		j--;
	ptr = malloc(((j - i + 1 + 1) * sizeof(char)));
	if (ptr == NULL)
		return (NULL);
	while (k < j - i + 1)
	{
		ptr[k] = *(char *)(s1 + i + k);
		k++;
	}
	ptr[k] = '\0';
	return (ptr);
}
