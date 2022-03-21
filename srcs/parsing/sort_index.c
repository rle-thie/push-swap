/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_index.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rle-thie <rle-thie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 13:35:42 by rle-thie          #+#    #+#             */
/*   Updated: 2022/03/21 14:44:21 by rle-thie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

// plus petit nbr de la stack

// cherche le plus petit nbr apres int x

t_stack	*smallest_nbr(t_stack *lst)
{
	t_stack	*tmp;
	int	i;
	
	tmp = lst;
	i = tmp->content;
	while (tmp)
	{
		if (i > tmp->content)
			i = tmp->content;
		tmp = tmp->next;
	}
	tmp = lst;
	while(tmp)
	{
		if (tmp->content == i)
			return (tmp);
		tmp = tmp->next;
	}
	return (NULL);
}

void smallest_after(t_stack *lst, int content)
{
	t_stack	*tmp;
	t_stack	*next_content;
	int	i;
	int	diff;
	
	diff = 0;
	tmp = lst;
	next_content = NULL;
	i = content + 1;
	while (tmp)
	{
		
	}
}

int	sort_index_simp(t_stack **lst, int len)
{
	t_stack	*tmp;
	// int	i;
	len = len;
	// i = 0;
	tmp = *lst;
	tmp = smallest_nbr(tmp);
	tmp->index = 0;
	smallest_after(*lst, tmp->content);
	// while (i < len - 1)
	// {
	// 	tmp = smallest_after(*lst, tmp->content);
	// 	tmp->index = ++i;
	// }
	return (1);
}