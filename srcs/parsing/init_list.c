/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rle-thie <rle-thie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 00:57:32 by rle-thie          #+#    #+#             */
/*   Updated: 2022/03/08 18:15:06 by rle-thie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

t_stack	*init_lst(t_stack *prev, int content)
{
	t_stack	*new;

	new = malloc(sizeof(t_stack));
	if (!new)
		return (NULL);
	new->content = content;
	new->index = -1;
	new->prev = prev;
	new->next = NULL;
	return (new);
}

t_stack	*create_lst(t_tab *data)
{
	t_stack	*lst;
	t_stack	*start;
	int	i;
	
	i = 1;
	lst = init_lst(NULL, data->tab[0]);
	start = lst;
	while (i > data->len)
	{
		lst = init_lst(lst, data->tab[i]);
		
		i++;
	}
	return (start);
}
