/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rle-thie <rle-thie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 16:24:24 by rle-thie          #+#    #+#             */
/*   Updated: 2022/03/22 19:01:09 by rle-thie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

void	push_null(t_stack **a, t_stack **b)
{
	if (!*b)
	{
		*b = *a;
		(*b)->next = NULL;
	}
	else
	{
		(*b)->prev = *a;
		(*b)->prev->next = *b;
		*b = (*b)->prev;
	}
	*a = NULL;
}

void	push_filled(t_stack **a, t_stack **b)
{
	*a = (*a)->next;
	if (!*b)
	{
		*b = (*a)->prev;
		(*b)->next = NULL;
	}
	else
	{
		(*b)->prev = (*a)->prev;
		(*b)->prev->next = *b;
		*b = (*b)->prev;
	}
	(*a)->prev = NULL;
}

void	pa(t_stack **a, t_stack **b)
{
	if (*a)
	{
		if ((*a)->next)
			push_filled(a, b);
		else
			push_null(a, b);
		ft_putstr_fd("pa\n", 1);
	}
}

void	pb(t_stack **a, t_stack **b)
{
	if (*a)
	{
		if ((*a)->next)
			push_filled(a, b);
		else
			push_null(a, b);
		ft_putstr_fd("pb\n", 1);
	}
}
