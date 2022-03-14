/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rle-thie <rle-thie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 16:24:24 by rle-thie          #+#    #+#             */
/*   Updated: 2022/03/14 19:39:28 by rle-thie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

int	push(t_stack **a, t_stack **b)
{
	// t_list	*tmp_prev;
	// t_list	*tmp_next;
	
	if (*a)
	{
		if (!*b)
		{
			*b = *a;
			printf("oauis\n");
			*a = (*a)->next;
			// printf("test %d \n\n", (*a)->content);
			(*b)->prev = NULL;
			(*b)->next = NULL;
			(*a)->prev = NULL;
			return (1);
		}
		else
		{
			printf("testttttttt\n\n");
			(*b)->prev = *a;
			*b = *a;
			*a = (*a)->next;
			(*b)->next->prev = *b;
			
			(*a)->prev = NULL;
			(*b)->prev = NULL;
			return (1);
		}
		// a->next->prev = NULL;
	}
	else
	{
		printf("ouasu\n\n");
		return (0);
	}
}

void	pa(t_stack **a, t_stack **b)
{
	if (push(a, b) == 1)
		ft_putstr_fd("pa", 1);
}