/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_input_utils.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rle-thie <rle-thie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 19:01:31 by rle-thie          #+#    #+#             */
/*   Updated: 2022/04/08 17:25:52 by rle-thie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

t_tab	*init_data(void)
{
	t_tab	*data;

	data = malloc(sizeof(t_tab));
	if (!data)
		return (0);
	data->len = 0;
	data->is_int = 0;
	return (data);
}

int	intcpy(t_tab *data, int *buff)
{
	int	i;

	data->tab = malloc(sizeof(int) * data->len);
	if (!data->tab)
		return (0);
	i = 0;
	while (i < data->len)
	{
		data->tab[i] = buff[i];
		i++;
	}
	return (1);
}

int	check_double(t_tab *data)
{
	int	i;
	int	buff;
	int	y;
	int	c;

	i = 0;
	while (i < data->len)
	{
		buff = data->tab[i];
		y = 0;
		c = 0;
		while (y < data->len)
		{
			if (buff == data->tab[y])
				c++;
			if (c == 2)
				return (0);
			y++;
		}
		i++;
	}
	return (1);
}

int	check_sorted(t_tab *data)
{
	int	i;
	int	buff;
	int	c;

	c = 0;
	i = 1;
	while (i < data->len)
	{
		buff = data->tab[i];
		if (buff > data->tab[i - 1])
		{
			c++;
		}
		i++;
	}
	if (c == data->len - 1)
		return (0);
	else
		return (1);
}

t_tab	*check_input(int ac, char **av)
{	
	t_tab	*data;
	int		*buff;

	data = init_data();
	buff = split_input(ac, av, data);
	intcpy(data, buff);
	free(buff);
	if (data->len <= 1 || !check_double(data) || !check_sorted(data)
		|| data->is_int == -1)
	{
		free_tab(data);
		return (NULL);
	}
	return (data);
}
