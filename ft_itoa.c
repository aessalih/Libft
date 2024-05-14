/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aessalih <aessalih@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 20:23:01 by aessalih          #+#    #+#             */
/*   Updated: 2023/11/15 21:24:13 by aessalih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	int_sign(long i)
{
	int	j;

	j = 0;
	if (i < 0)
	{
		i = -i;
		while (i != 0)
		{
			i /= 10;
			j++;
		}
		j++;
	}
	else if (i == 0)
		j = 1;
	else
	{
		while (i != 0)
		{
			i /= 10;
			j++;
		}
	}
	return (j);
}

char	*ft_itoa(int n)
{
	char		*ptr;
	int			j;
	long		i;

	i = n;
	j = int_sign(n);
	ptr = (char *) malloc(j + 1);
	if (ptr == NULL)
		return (NULL);
	ptr[j] = '\0';
	if (i < 0)
		i = -i;
	while (j > 0)
	{
		j--;
		ptr[j] = i % 10 + '0';
		i = i / 10;
	}
	if (n < 0)
		ptr[0] = '-';
	return (ptr);
}
