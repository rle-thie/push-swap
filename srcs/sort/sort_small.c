/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_small.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rle-thie <rle-thie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 17:22:44 by rle-thie          #+#    #+#             */
/*   Updated: 2022/03/23 15:57:27 by rle-thie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	sort_3_lst(t_stack **a, t_stack **b, int len)
{
	while (is_a_sorted(*a) == 0)
	{
		if (len == 2)
			sa(*a);
		else if ((*a)->index == 0)
		{
			pb(a, b);
			ra(a);
			pa(a, b);
		}
		else if ((*a)->next->index == 0 && (*a)->index == 1)
			sa(*a);
		else
			ra(a);
	}
}

int	ft_lst_size(t_stack *lst)
{
	int		i;
	t_stack	*tmp;

	tmp = lst;
	i = 0;
	if (tmp)
	{
		while (tmp)
		{
			tmp = tmp->next;
			i++;
		}
	}
	return (i);
}

int	is_in_end(t_stack *lst, int index)
{
	int		i;
	t_stack	*tmp;
	int		len;

	tmp = lst;
	i = 0;
	len = ft_lst_size(lst) / 2;
	while (i <= len)
	{
		if (tmp->index == index)
			return (1);
		tmp = tmp->next;
	}
	return (0);
}

void	sort_5_lst(t_stack **a, t_stack **b, int len)
{
	int	i;

	i = 0;
	while (i < len && !is_a_sorted(*a))
	{
		if ((*a)->index == i)
		{
			pb(a, b);
			i++;
		}
		else if ((*a)->next->index == i)
			sa(*a);
		else if (is_in_end(*a, i))
			rra(a);
		else
			ra(a);
	}
	while (*b)
		pa(b, a);
}
