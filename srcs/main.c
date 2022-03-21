/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rle-thie <rle-thie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 21:00:21 by rle-thie          #+#    #+#             */
/*   Updated: 2022/03/21 22:08:55 by rle-thie         ###   ########.fr       */
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
	t_stack	*a;
	t_stack	*b;

	if (ac <= 1)
		return (ft_error());
	data = check_input(ac, av);
	if (!check_input(ac, av))
		return (ft_error());
	a = create_lst(data);
	b = NULL;
	b=b;
	// printf("ln=%d\n", data->len);
	sort_index_simp(&a, data->len);
	if (data->len <= 3)
		sort_3_lst(&a, &b, data->len);
	else if (data->len <= 10)
		sort_5_lst(&a, &b, data->len);
	else
		sort_radix(&a, &b, data->len);
	// printf("\n");
	// print_lst(a);
	// printf("%d\n", is_a_sorted(a));

	free_tab(data);
	return (0);
}