/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rle-thie <rle-thie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 21:38:37 by rle-thie          #+#    #+#             */
/*   Updated: 2022/03/05 18:55:34 by rle-thie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"
# include <unistd.h>

typedef struct s_tab
{
	int	*tab;
	int	len;
}t_tab;

typedef struct s_stack
{
	struct s_stack	*next;
	struct s_stack	*prev;
	int				content;
	int	            index;
}t_stack;

//	parsing
void	ft_free(char **strs);
int	ft_error(void);
char	**create_tab(int c, int ac, char **av);
int	ft_valid_arg(char *str);
int	check_space_value(int ac, char **av);
char **split_input(int ac, char **av);
char	**check_input(int ac, char **av);


// operations

// sort

#endif