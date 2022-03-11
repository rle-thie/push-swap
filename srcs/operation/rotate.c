/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rle-thie <rle-thie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 16:25:40 by rle-thie          #+#    #+#             */
/*   Updated: 2022/03/11 22:13:53 by rle-thie         ###   ########.fr       */
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
		ft_putstr_fd("ra", 1);
}

void	rb(t_stack **lst)
{
	if (rotate(lst))
		ft_putstr_fd("rb", 1);
}