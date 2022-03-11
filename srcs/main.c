/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rle-thie <rle-thie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 21:00:21 by rle-thie          #+#    #+#             */
/*   Updated: 2022/03/11 15:57:15 by rle-thie         ###   ########.fr       */
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
	if (!check_input(ac, av))
		return (ft_error());
	// i = 0;

	// while (i < data->len)
	// {
	// 	printf("%d, %d\n", data->len, data->tab[i++]);
	// }

	a = create_lst(data);
	b = NULL;
	b = a;
	b = b;

	printf("====STACK A====\n");
	i = 0;
	while (i < data->len)
	{
		printf("addr=%p, prev=%p, next=%p, value=%d, index=%d\n", a, a->prev, a->next, a->content, a->index);
		a = a->next;
		i++;
	}
	a = b;
	
	sa(a);
	
	printf("====STACK A====\n");
	i = 0;
	while (i < data->len)
	{
		printf("addr=%p, prev=%p, next=%p, value=%d, index=%d\n", a, a->prev, a->next, a->content, a->index);
		// printf("value=%d, index=%d", a)
		a = a->next;
		i++;
	}

	free_tab(data);
	return (0);
}