/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_int.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rle-thie <rle-thie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 17:40:13 by rle-thie          #+#    #+#             */
/*   Updated: 2022/05/19 16:59:56 by rle-thie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

long long	ft_atol(const char *nptr)
{
	long long	sign;
	long long	result;
	long long	i;

	result = 0;
	sign = 1;
	i = 0;
	while ((nptr[i] >= 9 && nptr[i] <= 13) || nptr[i] == 32)
	{
		i++;
	}
	if (nptr[i] == '+' || nptr[i] == '-')
	{
		if (nptr[i] == '-')
			sign *= -1;
		i++;
	}
	while (nptr[i] >= 48 && nptr[i] <= 57)
	{
		result = result * 10 + nptr[i] - '0';
		i++;
	}
	return (result * sign);
}

void	check_int(char **tab, t_tab *data)
{
	int	i;
	int	b;

	i = 0;
	b = 1;
	while (tab[i])
	{
		printf("%c %ld\n", tab[i][0], ft_strlen(tab[i]));
		if ((tab[i][0] == '-' && ft_strlen(tab[i]) >= 12) || ft_strlen(tab[i]) >= 11)
		{
			printf("finito\n");
			b = -1;
			data->is_int = -1;
		}
		i++;
	}
	i = 0;
	while (tab[i] && b != -1)
	{
		// printf("%d\n", ft_atol(tab[i]));
		if (ft_atol(tab[i]) > 2147483647 || ft_atol(tab[i]) < -2147483648)
		{
			data->is_int = -1;
			break ;
		}
		i++;
	}
}
