/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aessalih <aessalih@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 11:44:11 by aessalih          #+#    #+#             */
/*   Updated: 2023/11/24 21:54:30 by aessalih         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int		i;
	long	n;
	long	k;
	int		j;

	i = 0;
	j = 1;
	n = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i++] == '-')
			j = -1;
	}
	while (ft_isdigit(str[i]))
	{
		k = n;
		n = n * 10 + (str[i++] - '0');
		if (n < k && j == 1)
			return (-1);
		else if (n < k && j == -1)
			return (0);
	}
	return (j * n);
}
