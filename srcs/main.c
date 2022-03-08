/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rle-thie <rle-thie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 21:00:21 by rle-thie          #+#    #+#             */
/*   Updated: 2022/03/07 18:58:59 by rle-thie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int main(int ac, char **av)
{
	char	**input;
	// t_stack	a;
	// t_stack	b;
	
	if (ac <= 1)
		return (ft_error());
	input = check_input(ac, av);
	if (!input)
		return (ft_error());
	// a = create_lst();
	// b = NULL;
	ft_free(input);
	return (0);
}