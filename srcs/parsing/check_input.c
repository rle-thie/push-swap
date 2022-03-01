/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_input.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rle-thie <rle-thie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 13:58:23 by rle-thie          #+#    #+#             */
/*   Updated: 2022/02/28 18:36:29 by rle-thie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

char **split_input(int ac, char **av)
{
	
}

int	ft_error(void)
{
	write(1, "Error\n", 6);
	return (0);
}

int check_input(int ac, char **av)
{
	if (ac < 2)
		return(ft_error());
	split_input(ac, av);
	return (1);
}