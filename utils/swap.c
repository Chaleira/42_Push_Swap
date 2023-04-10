/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plopes-c <plopes-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 23:40:34 by plopes-c          #+#    #+#             */
/*   Updated: 2023/04/11 00:10:54 by plopes-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void	sawp(t_stack *stack)
{
	int n;
	
	n = stack->head->content;
	stack->head->content = stack->head->next->content;
	stack->head->next->content = n;
}

void sa(t_stack *stack_a)
{
	swap(stack_a);
	write(1, "sa\n", 3);
}

void sb(t_stack *stack_b)
{
	swap(stack_b);
	write(1, "sb\n", 3);
}

void ss(t_stack *stack_a, t_stack *stack_b)
{
	swap(stack_a);
	swap(stack_b);
	write(1, "ss\n", 3);
}