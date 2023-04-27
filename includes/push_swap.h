/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plopes-c <plopes-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 14:42:01 by chales            #+#    #+#             */
/*   Updated: 2023/04/27 16:53:57 by plopes-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft.h"
# include <stdint.h>

typedef struct s_stack
{
	t_list	*head;
	int		len;
	int		num_max;
	int		num_min;
	int		len_max;
	int		min_pos;
}				t_stack;

t_stack	*stack_a(void);
t_stack	*stack_b(void);
void	sa(void);
void	sb(void);
void	ss(void);
void	pa(void);
void	pb(void);
void	ra(void);
void	rb(void);
void	rr(void);
void	rra(void);
void	rrb(void);
void	rrr(void);
void	stack_init(char **num);
void	free_split(char **str);
void	list_free(t_list *lst);
void	free_lists(void);
int		stack_find_max_min(t_stack *stack);
void	find_min_pos(t_stack *stack);
int		ft_strlen_no_zero(char *str);
void	check_repeat(t_stack *stack, int num);
void	check_digit(char *num);
void	check_max_min(char *num);
int		get_num(char *num);
void	error_msg(char *error);
int		max_len_num(t_stack *stack);
int		is_sorted(t_stack *stack);
void	radix(void);
void	sort_3(void);
void	sort_3_aux(int a, int b, int c);
void	sort_4(void);
void	sort_5(void);
void	min_to_stack_b(int times);
void	get_values(void);
void	sort_10(void);
int		max_bit(void);
void	sort_under_50(void);
void	stack_print(t_stack *stack_a, t_stack *stack_b);

#endif