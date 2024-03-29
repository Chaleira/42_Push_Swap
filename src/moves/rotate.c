/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plopes-c <plopes-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 00:32:23 by plopes-c          #+#    #+#             */
/*   Updated: 2023/04/26 05:45:04 by plopes-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	rotate(t_stack *stack)
{
	t_list	*last;

	if (!stack->head)
		return ;
	last = stack->head;
	while (last->next != NULL)
	{
		last = last->next;
	}
	last->next = stack->head;
	stack->head = stack->head->next;
	last->next->next = NULL;
}

void	ra(void)
{
	rotate(stack_a());
	write(1, "ra\n", 3);
}

void	rb(void)
{
	rotate(stack_b());
	write(1, "rb\n", 3);
}

void	rr(void)
{
	rotate(stack_a());
	rotate(stack_b());
	write(1, "rr\n", 3);
}
