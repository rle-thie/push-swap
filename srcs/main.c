/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rle-thie <rle-thie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 21:00:21 by rle-thie          #+#    #+#             */
/*   Updated: 2022/03/20 00:42:57 by rle-thie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	free_tab(t_tab *tab)
{
	free(tab->tab);
	free(tab);
	return (0);
}

int main(int ac, char **av)
{
	t_tab *data;
	// int i;
	t_stack	*a;
	t_stack	*b;
	// t_stack *tmp;

	if (ac <= 1)
		return (ft_error());
	data = check_input(ac, av);
	if (!check_input(ac, av))
		return (ft_error());
	// if (data->len <= 5)
	// 	sort_small_stack(&a, &b);
	// else
	// 	sort_big_stack(&a, &b);	
	
	// i = 0;
	// while (i < data->len)
	// {
	// 	printf("%d, %d\n", data->len, data->tab[i++]);
	// }

	a = create_lst(data);
	b = NULL;
	print_lst(a);
	while (is_a_sorted(a) == 0)
		sort_radix(&a, &b, data->len);
	print_lst(a);
	printf("%d\n", is_a_sorted(a));
	// b = b;
	// tmp = a;

	free_tab(data);
	return (0);
}