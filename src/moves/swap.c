/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plopes-c <plopes-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/10 23:40:34 by plopes-c          #+#    #+#             */
/*   Updated: 2023/04/26 05:45:13 by plopes-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	swap(t_stack *stack)
{
	int	n;

	if (!stack->head)
		return ;
	n = (int)(intptr_t)stack->head->content;
	stack->head->content = stack->head->next->content;
	stack->head->next->content = (void *)(intptr_t)n;
}

void	sa(void)
{
	swap(stack_a());
	write(1, "sa\n", 3);
}

void	sb(void)
{
	swap(stack_b());
	write(1, "sb\n", 3);
}

void	ss(void)
{
	swap(stack_a());
	swap(stack_b());
	write(1, "ss\n", 3);
}
