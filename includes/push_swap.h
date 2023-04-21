/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plopes-c <plopes-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 14:42:01 by chales            #+#    #+#             */
/*   Updated: 2023/04/21 19:29:32 by plopes-c         ###   ########.fr       */
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
	int		len_max;
}				t_stack;

t_stack	*stack_a(void);
t_stack	*stack_b(void);
void	sa();
void	sb();
void	ss();
void	pa();
void	pb();
void	ra();
void	rb();
void	rr();
void	rra();
void	rrb();
void	rrr();
void	stack_init(char **num);
void	list_free(t_list *lst);
void	free_lists(void);
void	stack_print(t_stack *stack_a, t_stack *stack_b);
int		stack_find_max(t_stack *stack);
int		ft_strlen_no_zero(char *str);
void	check_repeat(t_stack *stack, int num);
void	check_digit(char *num);
void	check_max_min(char *num);
int		get_num(char *num);
void	error_msg(char *error);
int		max_len(t_stack *stack);
int		is_sorted(t_stack *stack);
void	radix();


#endif