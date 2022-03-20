/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rle-thie <rle-thie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 15:55:51 by rle-thie          #+#    #+#             */
/*   Updated: 2022/03/19 16:55:00 by rle-thie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

int	stack_len(t_stack *lst)
{
	t_stack	*tmp;
	int	i;
	
	if (lst)
	{
		i = 0;
		tmp = lst;
		while (tmp->next != NULL)
		{
			tmp = tmp->next;
			i++;
		}
		return (++i);
	}
	else
		return (0);

}

int	is_a_sorted(t_stack *lst)
{
	t_stack	*tmp;
	int	i;
	int	len;

	i = 0;
	tmp = lst;
	len = stack_len(tmp);
	if (tmp)
	{
		while (tmp->next != NULL && tmp->content < tmp->next->content)
		{
			tmp = tmp->next;
			i++;
		}
		if (i == len - 1)
			return (1);
		else
			return (0);
		
	}
	else
		return (0);
}

void	print_lst(t_stack *lst)
{
	t_stack *tmp;
	
	tmp = lst;
	if (tmp)
	{
		while (tmp->next != NULL)
		{
			printf("addr=%p, prev=%p, next=%p, value=%d, index=%d\n", tmp, tmp->prev, tmp->next, tmp->content, tmp->index);
			tmp = tmp->next;
		}
		if (tmp)
			printf("addr=%p, prev=%p, next=%p, value=%d, index=%d\n", tmp, tmp->prev, tmp->next, tmp->content, tmp->index);
	}
}