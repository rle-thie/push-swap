/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rle-thie <rle-thie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 16:25:40 by rle-thie          #+#    #+#             */
/*   Updated: 2022/03/11 22:20:07 by rle-thie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

int	rotate(t_stack **lst)
{
	t_stack	*last;
	t_stack	*first;

	if (*lst && (*lst)->next)
	{
		last = *lst;
		*lst = (*lst)->next;
		first = *lst;
		printf("\n%d %d\n", last->content, first->content);
		(*lst)->prev = NULL;
		*lst = ft_lst_last(*lst);
		(*lst)->next = last;
		last->prev = *lst;
		last->next = NULL;
		*lst = first ;
		return (1);
	}
	return (0);
}

void	ra(t_stack **lst)
{
	if (rotate(lst))
		ft_putstr_fd("ra\n", 1);
}

void	rb(t_stack **lst)
{
	if (rotate(lst))
		ft_putstr_fd("rb\n", 1);
}

void	rb(t_stack **a, t_stack **b)
{
	int c;

	c = 0;
	if (rotate(a))
		c++;
	if (rotate(b))
		c++;
	if (c > 0)
		ft_putstr_fd("rr\n", 1);
}