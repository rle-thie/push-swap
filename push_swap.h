/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rle-thie <rle-thie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/26 21:38:37 by rle-thie          #+#    #+#             */
/*   Updated: 2022/04/08 17:23:02 by rle-thie         ###   ########.fr       */
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
	int	is_int;
}t_tab;

typedef struct s_stack
{
	struct s_stack	*next;
	struct s_stack	*prev;
	int				content;
	int				index;
}t_stack;

//	parsing
void	ft_free(char **strs);
int		free_tab(t_tab *tab);
int		ft_error(void);
char	**create_tab(int c, int ac, char **av);
int		ft_valid_arg(char *str);
int		check_space_value(int ac, char **av);
int		*split_input(int ac, char **av, t_tab *data);
t_tab	*check_input(int ac, char **av);
void	check_int(char **tab, t_tab *data);

t_stack	*create_lst(t_tab *data);
t_stack	*ft_lst_last(t_stack *lst);

// operations
int		swap(t_stack *lst);
void	sa(t_stack *lst);
void	sb(t_stack *lst);
void	ss(t_stack *a, t_stack *b);

int		rotate(t_stack **lst);
void	ra(t_stack **lst);
void	rb(t_stack **lst);
void	rr(t_stack **a, t_stack **b);

// int	push(t_stack **a, t_stack **b);
void	push_filled(t_stack **a, t_stack **b);
void	push_null(t_stack **a, t_stack **b);
void	pa(t_stack **a, t_stack **b);
void	pb(t_stack **a, t_stack **b);

int		reverse_rotate(t_stack	**lst);
void	rra(t_stack **a);
void	rrb(t_stack **a);
void	rrr(t_stack **a, t_stack **b);

// sort
int		is_a_sorted(t_stack *lst);
int		stack_len(t_stack *lst);
void	sort_radix(t_stack **a, t_stack **b, int size);

int		sort_index_simp(t_stack **lst, int len);
t_stack	*smallest_after(t_stack *lst, int content);
t_stack	*smallest_nbr(t_stack *lst);
t_stack	*find_content(t_stack *tmp, int i);
void	sort_3_lst(t_stack **a, t_stack **b, int len);
void	sort_5_lst(t_stack **a, t_stack **b, int len);

#endif