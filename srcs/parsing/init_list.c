/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rle-thie <rle-thie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 00:57:32 by rle-thie          #+#    #+#             */
/*   Updated: 2022/02/27 01:51:13 by rle-thie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

int init_lst(t_stack *tab)
{
	tab->content = 0;
	tab->index = 0;
	tab->prev = NULL;
	tab->next = NULL;
	return (0);
}

int create_lst(void)
{
	t_stack	tab;
	
	init_lst(&tab);
	
	return (0);
}