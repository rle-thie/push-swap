/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rle-thie <rle-thie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 21:00:21 by rle-thie          #+#    #+#             */
/*   Updated: 2022/03/10 21:33:15 by rle-thie         ###   ########.fr       */
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
	int i;
	t_stack	*a;
	t_stack	*b;
	
	if (ac <= 1)
		return (ft_error());
	data = check_input(ac, av);
	if (!data->tab)
		return (ft_error());
	// i = 0;
	printf("\n====MAIN====\n");

	// while (i < data->len)
	// {
	// 	printf("%d, %d\n", data->len, data->tab[i++]);
	// }

	a = create_lst(data);
	b = NULL;
	a = a;
	b = b;

	printf("====TEST====\n");
	i = 0;
	while (i < data->len)
	{
		printf("addr=%p, prev=%p, next=%p, value=%d, index=%d\n", a, a->prev, a->next, data->tab[i], a->index);
		a = a->next;
		i++;
	}

	free_tab(data);
	return (0);
}