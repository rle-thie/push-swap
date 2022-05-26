/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rle-thie <rle-thie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 21:00:21 by rle-thie          #+#    #+#             */
/*   Updated: 2022/05/26 14:52:23 by rle-thie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	free_stack(t_stack **lst)
{
	t_stack	*tmp;

	while (*lst)
	{
		tmp = *lst;
		*lst = (*lst)->next;
		free(tmp);
	}
}

int	free_all(t_tab *data, t_stack **a, t_stack **b)
{
	free_tab(data);
	free_stack(a);
	free_stack(b);
	return (1);
}

int	free_tab(t_tab *tab)
{
	free(tab->tab);
	free(tab);
	return (0);
}

int	main(int ac, char **av)
{
	t_tab	*data;
	t_stack	*a;
	t_stack	*b;

	if (ac < 2)
		return (0);
	data = check_input(ac, av);
	if (!data)
		return (ft_error());
	a = create_lst(data);
	b = NULL;
	if (is_a_sorted(a) == 1)
	{
		free_all(data, &a, &b);
		return (0);
	}
	sort_index_simp(&a, data->len);
	if (data->len <= 3)
		sort_3_lst(&a, &b, data->len);
	else if (data->len <= 10)
		sort_5_lst(&a, &b, data->len);
	else
		sort_radix(&a, &b, data->len);
	free_all(data, &a, &b);
	return (0);
}
