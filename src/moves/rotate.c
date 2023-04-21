/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plopes-c <plopes-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 00:32:23 by plopes-c          #+#    #+#             */
/*   Updated: 2023/04/21 16:15:58 by plopes-c         ###   ########.fr       */
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

void	ra()
{
	rotate(stack_a());
	write(1, "ra\n", 3);
}

void	rb()
{
	rotate(stack_b());
	write(1, "rb\n", 3);
}

void	rr()
{
	rotate(stack_a());
	rotate(stack_b());
	write(1, "rr\n", 3);
}
