/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aessalih <aessalih@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 13:05:29 by aessalih          #+#    #+#             */
/*   Updated: 2023/11/16 21:54:24 by aessalih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_words(char const *str, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		if (str[i] == c)
			i++;
		else
		{
			count++;
			while (!(str[i] == c) && str[i])
				i++;
		}
	}
	return (count);
}

static char	*taemar(char const *s, char c)
{
	char	*ptr;
	int		i;
	int		j;

	j = 0;
	i = 0;
	while (s[j] && s[j] != c)
		j++;
	ptr = malloc((j + 1) * sizeof(char));
	if (ptr == NULL)
		return (0);
	while (i < j)
	{
		ptr[i] = s[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}

static char	**ft_free(char **ptr, int j)
{
	while (j >= 0)
	{
		free(ptr[j]);
		j--;
	}
	free(ptr);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**ptr;
	int		j;
	int		k;

	j = ft_count_words(s, c);
	if (!s)
		return (NULL);
	ptr = malloc(sizeof(char *) * (j + 1));
	if (ptr == NULL)
		return (NULL);
	k = 0;
	while (k < j && *s)
	{
		if (*s != c && *s)
		{
			ptr[k] = taemar(s, c);
			if (!ptr[k])
				return (ft_free(ptr, k - 1));
			s += ft_strlen(ptr[k++]);
		}
		s++;
	}
	ptr[k] = NULL;
	return (ptr);
}
