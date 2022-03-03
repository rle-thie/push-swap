/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_input.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rle-thie <rle-thie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 13:58:23 by rle-thie          #+#    #+#             */
/*   Updated: 2022/03/03 16:08:46 by rle-thie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

char	**create_tab(int c, int ac, char **av)
{
	char **tab;
	char **buff;
	int	i;
	int	x;
	int y;
	
	x = 0;
	tab = malloc(sizeof(char *) * c + 1);
	if (!tab)
		return (NULL);
	tab[c] = NULL;
	i = 1;
	while (i < ac)
	{
		if (ft_strchr(av[i], ' '))
		{
			buff = ft_split(av[i], ' ');
			y = 0;
			while (buff[y])
			{
				tab[x++] = ft_strdup(buff[y++]);
				// y++;
			}
			ft_free(buff);
			i++;
		}
		else
			tab[x++] = ft_strdup(av[i++]);
	}
	// free(tab);
	return (tab);
	// return (NULL);
}

int	ft_valid_arg(char *str)
{
	size_t	i;
	
	if (str[0] != '\0')
	{
		i = 0;
		while (i < ft_strlen(str))
		{
			if ((i == 0 && str[i] == '+') || (i == 0 && str[i] == '-') || str[i] == ' ')
				i++;
			else if (!ft_isdigit(str[i]) || (i != 0 && str[i] == '-') || (i != 0 && str[i] == '+'))
				return (0);
			else
				i++;
		}
		return (1);
	}
	return (0);	
}

// int	cmp_nbr(char *str)

int	check_space_value(int ac, char **av)
{
	int	i;
	char	**str;
	int	c;
	int y;
	int	x;

	i = 1;
	c = 0;
	while (i < ac)
	{
		if (ft_strchr(av[i], ' '))
		{
			x = 0;
			y = 0;
			str = ft_split(av[i], ' ');
			while (str[x] != NULL)
			{
				y++;
				x++;
			}
			y--;
			c = c + y;
			ft_free(str);
		}
		i++;
	}
	return (c);
}

char **split_input(int ac, char **av)
{
	int i;
	int	c;
	char **tab;

	c = 0;
	i = 1;
	while (i < ac)
	{
		if (ft_valid_arg(av[i]) == 1)
			c++;
		else
		{
			ft_error();
			return(NULL);
		}
		i++;
	}
	c = c + check_space_value(ac, av);
	tab = create_tab(c, ac, av);
	i = 0;
	while (tab[i])
		printf("%s ", tab[i++]);
	printf("\nc=%d\n", c);
	return(tab);
}


char	**check_input(int ac, char **av)
{
	char	**tab;
	
	if (ac < 2)
	{
		write(1, "Error\n", 6);
		return(NULL);
	}
	tab = split_input(ac, av);
	return (tab);
}