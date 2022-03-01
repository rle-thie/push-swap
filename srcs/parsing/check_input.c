/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_input.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rle-thie <rle-thie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 13:58:23 by rle-thie          #+#    #+#             */
/*   Updated: 2022/03/01 12:22:31 by rle-thie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

int	ft_error(void)
{
	write(1, "Error\n", 6);
	return (NULL);
}

int	ft_isnbr(char *str)
{
	size_t	i;
	
	if (str[0] != '\0')
	{
		i = 0;
		while (i < ft_strlen(str))
		{
			if (!ft_isdigit(str[i]))
				return (0);
			i++;
		}
		return (1);
	}
	return (0);	
}

// int	cmp_nbr(char *str)

char **split_input(int ac, char **av)
{
	int i;
	int	c;

	c = 0;
	i = 1;
	while (i < ac)
	{
		if (ft_isnbr(av[i]) == 1)
			c++;
		else
			return(ft_error());
		i++;
	}
	printf("c=%d", c);
	return(NULL);
}


int check_input(int ac, char **av)
{
	if (ac < 2)
		return(ft_error());
	split_input(ac, av);
	return (1);
}