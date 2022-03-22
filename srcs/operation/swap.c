/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rle-thie <rle-thie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 15:24:53 by rle-thie          #+#    #+#             */
/*   Updated: 2022/03/22 19:01:41 by rle-thie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

int	swap(t_stack *lst)
{
	int	tmp_index;
	int	tmp_content;

	if (lst && lst->next != NULL)
	{
		tmp_content = lst->content;
		tmp_index = lst->index;
		lst->content = lst->next->content;
		lst->index = lst->next->index;
		lst->next->content = tmp_content;
		lst->next->index = tmp_index;
		return (1);
	}
	else
		return (0);
}

void	sa(t_stack *lst)
{
	if (!swap(lst))
		return ;
	ft_putstr_fd("sa\n", 1);
}

void	sb(t_stack *lst)
{
	if (!swap(lst))
		return ;
	ft_putstr_fd("sb\n", 1);
}

void	ss(t_stack *a, t_stack *b)
{
	if (!swap(a) || !swap(b))
		return ;
	ft_putstr_fd("ss\n", 1);
}
