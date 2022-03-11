/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rle-thie <rle-thie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 00:57:32 by rle-thie          #+#    #+#             */
/*   Updated: 2022/03/11 14:53:40 by rle-thie         ###   ########.fr       */
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

t_stack	*ft_lst_last(t_stack *lst)
{
	while (lst->next != NULL)
	{
		lst = lst->next;
	}
	return (lst);
}

void	lst_add_next(t_stack *start, t_stack *lst)
{
	t_stack *buff;
	
	if (lst)
	{
		if (start)
		{
			buff = ft_lst_last(start);
			// buff=buff;
			// printf("addr=%p, prev=%p, next=%p, value=%d, index=%d\n", lst, lst->prev, lst->next, lst->content, lst->index);
			// printf("%d, %d\n", buff->content, lst->content);
			buff->next = lst;
		}
		else
			start = lst;
	}
}

void	sort_index(t_stack *start, t_stack *lst, t_tab *data)
{
	int i;

	i = 0;
	lst = start;
	while (i < data->len)
	{ 
		lst->index = i;
		// printf("%d\n", lst->content);
		lst = lst->next;
		i++;
	}
}

t_stack	*create_lst(t_tab *data)
{
	t_stack	*lst;
	t_stack	*start;
	int	i;

	i = 1;
	lst = init_lst(NULL, data->tab[0]);
	start = lst;
	while (i < data->len)
	{
		lst = init_lst(lst, data->tab[i]);
		lst_add_next(start, lst);
		// printf("-- addr=%p, prev=%p, next=%p, value=%d, index=%d\n", lst, lst->prev, lst->next, data->tab[i - 1], lst->index);
		i++;
	}
	sort_index(start, lst, data);
	return (start);
}
