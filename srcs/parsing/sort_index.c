/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_index.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rle-thie <rle-thie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 13:35:42 by rle-thie          #+#    #+#             */
/*   Updated: 2022/03/22 19:03:39 by rle-thie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

// plus petit nbr de la stack

// cherche le plus petit nbr apres int x

t_stack	*find_content(t_stack *tmp, int i)
{
	while (tmp)
	{
		if (tmp->content == i)
			return (tmp);
		tmp = tmp->next;
	}
	return (NULL);
}

t_stack	*smallest_nbr(t_stack *lst)
{
	t_stack	*tmp;
	int		i;

	tmp = lst;
	i = tmp->content;
	while (tmp)
	{
		if (i > tmp->content)
			i = tmp->content;
		tmp = tmp->next;
	}
	tmp = lst;
	while (tmp)
	{
		if (tmp->content == i)
			return (tmp);
		tmp = tmp->next;
	}
	return (NULL);
}

t_stack	*smallest_after(t_stack *lst, int content)
{
	t_stack	*tmp;
	int		i;
	int		first;

	first = 1;
	tmp = lst;
	i = content;
	while (tmp)
	{
		if (tmp->content > content && first == 1)
		{
			first = 0;
			i = tmp->content;
		}
		else if (tmp->content < i && tmp->content > content)
			i = tmp->content;
		tmp = tmp->next;
	}
	if (i == content)
		return (NULL);
	else
	{
		return (find_content(lst, i));
	}
	return (NULL);
}

int	sort_index_simp(t_stack **lst, int len)
{
	t_stack	*tmp;
	int		i;

	i = 0;
	tmp = *lst;
	tmp = smallest_nbr(tmp);
	tmp->index = 0;
	while (i < len - 1)
	{
		tmp = smallest_after(*lst, tmp->content);
		tmp->index = ++i;
	}
	return (1);
}
