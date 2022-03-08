/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rle-thie <rle-thie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 21:00:21 by rle-thie          #+#    #+#             */
/*   Updated: 2022/03/08 15:32:16 by rle-thie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int main(int ac, char **av)
{
	t_tab *data;
	// int i;
	// t_stack	a;
	// t_stack	b;
	
	if (ac <= 1)
		return (ft_error());
	data = check_input(ac, av);
	if (!data->tab)
		return (ft_error());
	// i = 0;
	// while (i < data->len)
	// {
		// printf("%d, %d\n", data->len, data->tab[i++]);
	// }
	// a = create_lst();
	// b = NULL;
	// free(data->len);
	// free(data->tab);
	free(data);
	return (0);
}