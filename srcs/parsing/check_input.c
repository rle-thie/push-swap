/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_input.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rle-thie <rle-thie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 13:58:23 by rle-thie          #+#    #+#             */
/*   Updated: 2022/03/15 19:26:18 by rle-thie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../push_swap.h"

int	*convert_tab_int(char **tab, int len)
{
	int	i;
	int	*int_tab;
	
	i = 0;
	int_tab = malloc(sizeof(int) * len);
	if (!int_tab)
		return (NULL);
	while(tab[i])
	{
		int_tab[i] = atoi(tab[i]);
		i++;
	}
	ft_free(tab);
	return (int_tab);
}

char	**create_tab(int c, int ac, char **av)
{
	char **tab;
	char **buff;
	int	i;
	int	x;
	int y;
	
	x = 0;
	// tab = malloc(sizeof(char *) * c + 1);
	tab = ft_calloc(sizeof(char *), c + 1);
	if (!tab)
		return (NULL);
	// tab[0] = NULL;
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
	int	sign;
	
	sign = 0;
	if (str[0] != '\0')
	{
		i = 0;
		while (i < ft_strlen(str))
		{
			if (str[i] == ' ' || ft_isdigit(str[i]))
				sign = 0;
			if ((i == 0 && str[i] == '+' && sign == 0) || (i == 0 && str[i] == '-' && sign == 0) || str[i] == ' ')
				i++;
			else if ((sign == 0 && str[i] == '+') || (sign == 0 && str[i] == '-'))
			{
				i++;
				sign++;
			}
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

int	*split_input(int ac, char **av, t_tab *data)
{
	int i;
	int	c;
	char **tab;
	int	*int_tab;

	c = 0;
	i = 1;
	while (i < ac)
	{
		if (ft_valid_arg(av[i]) == 1)
			c++;
		else
		{
			return(NULL);
		}
		i++;
	}
	c = c + check_space_value(ac, av);
	tab = create_tab(c, ac, av);
	i = 0;
	// while (tab[i])
	// 	printf("%s ", tab[i++]);
	// printf("\nc=%d\n", c);
	// convert_tab_int(tab, c);
	data->len = c;
	int_tab = convert_tab_int(tab, c);
	// printf("%d\n", int_tab[0]);
	// printf("%d\n", int_tab[1]);
	// printf("%d\n", int_tab[2]);
	// printf("%d\n", int_tab[3]);
	return (int_tab);
}

t_tab	*init_data(void)
{
	t_tab *data;

	data = malloc(sizeof(t_tab));
	if (!data)
		return (0);
	data->len = 0;
	return (data);
}

int	intcpy(t_tab *data, int *buff)
{
	int i;

	data->tab = malloc(sizeof(int) * data->len);
	if (!data->tab)
		return (0);
	i = 0;
	while (i < data->len)
	{
		data->tab[i] = buff[i];
		i++;
	}
	return (1);
}

int	check_double(t_tab *data)
{
	int i;
	int	buff;
	int	y;
	int c;

	i = 0;
	while (i < data->len)
	{
		buff = data->tab[i];
		y = 0;
		c = 0;
		while (y < data->len)
		{
			if (buff == data->tab[y])
				c++;
			if (c == 2)
				return (0);
			y++;
		}
		i++;
	}
	return (1);
}

int check_sorted(t_tab *data)
{
	int i;
	int	buff;
	int c;

	c = 0;
	i = 1;
	while (i < data->len)
	{
		buff = data->tab[i];
		if (buff > data->tab[i - 1])
		{
			// printf("oqusi %d, buff=%d, data=%d\n", c, buff, data->tab[i]);	
			c++;
		}
		// printf("oqusi %d, buff=%d, data=%d\n", c, buff, data->tab[i - 1]);	
		i++;
	}
	// printf("\n\n\n");
	if (c == data->len - 1)
		return (0);
	else
		return (1);
}

t_tab	*check_input(int ac, char **av)
{	
	t_tab	*data;
	int	*buff;

	data = init_data();
	buff = split_input(ac, av, data);
	// data->tab = buff;
	intcpy(data, buff);
	free(buff);
	
	if (data->len <= 1 || !check_double(data)  || !check_sorted(data))
	{
		free_tab(data);
		return(NULL);
	}
	return (data);
}