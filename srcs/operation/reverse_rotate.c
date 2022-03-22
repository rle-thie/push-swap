/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rle-thie <rle-thie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 15:16:32 by rle-thie          #+#    #+#             */
/*   Updated: 2022/03/22 19:01:48 by rle-thie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

int	reverse_rotate(t_stack	**lst)
{
	t_stack	*last;
	t_stack	*first;

	if (*lst && (*lst)->next)
	{
		last = *lst;
		*lst = ft_lst_last(*lst);
		first = *lst;
		(*lst)->next = last;
		(*lst)->next->prev = *lst;
		(*lst)->prev->next = NULL;
		(*lst)->prev = NULL;
		*lst = first;
		return (1);
	}
	else
		return (0);
}

void	rra(t_stack **a)
{
	if (reverse_rotate(a))
	{
		ft_putstr_fd("rra\n", 1);
	}
}

void	rrb(t_stack **a)
{
	if (reverse_rotate(a))
	{
		ft_putstr_fd("rrb\n", 1);
	}
}

void	rrr(t_stack **a, t_stack **b)
{
	int	c;

	c = 0;
	if (reverse_rotate(a))
		c++;
	if (reverse_rotate(b))
		c++;
	if (c > 0)
		ft_putstr_fd("rrr\n", 1);
}
