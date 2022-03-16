/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rle-thie <rle-thie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 21:38:37 by rle-thie          #+#    #+#             */
/*   Updated: 2022/03/16 15:50:09 by rle-thie         ###   ########.fr       */
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
int	free_tab(t_tab *tab);
int	ft_error(void);
char	**create_tab(int c, int ac, char **av);
int	ft_valid_arg(char *str);
int	check_space_value(int ac, char **av);
int	*split_input(int ac, char **av, t_tab *data);
t_tab	*check_input(int ac, char **av);

t_stack	*create_lst(t_tab *data);
t_stack	*ft_lst_last(t_stack *lst);

// operations
int	swap(t_stack *lst);
void	sa(t_stack *lst);
void	sb(t_stack *lst);
void	ss(t_stack *a, t_stack *b);

int	rotate(t_stack **lst);
void	ra(t_stack **lst);
void	rb(t_stack **lst);
void	rr(t_stack **a, t_stack **b);

// int	push(t_stack **a, t_stack **b);
void	push_filled(t_stack **a, t_stack **b);
void	push_null(t_stack **a, t_stack **b);
void	pa(t_stack **a, t_stack **b);
void	pb(t_stack **a, t_stack **b);

int	reverse_rotate(t_stack	**lst);
void	rra(t_stack **a);
void	rrb(t_stack **a);
void	rrr(t_stack **a, t_stack **b);

// sort

#endif