/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rle-thie <rle-thie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 16:24:24 by rle-thie          #+#    #+#             */
/*   Updated: 2022/03/11 17:53:33 by rle-thie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

int	push(t_stack *a, t_stack *b)
{
	t_list	tmp_prev;
	t_list	tmp_next;
	
	if (a)
	{
		if (!b)
		{
			b = a;
			b->prev = NULL;
			b->next = NULL;                
			// a->next->prev = NULL;
		}
		else
		{
			
		}
		// a->next->prev = NULL;
	}
	else
		return (0);
}