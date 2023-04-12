/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plopes-c <plopes-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 15:16:57 by plopes-c          #+#    #+#             */
/*   Updated: 2023/04/12 16:20:04 by plopes-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void	reverse(t_stack *stack)
{
	t_list	*last;
	t_list	*second_last;

	if (!stack->head)
		return ;
	last = stack->head;
	while (last->next != NULL)
	{
		second_last = last;
		last = last->next;
	}
	last->next = stack->head;
	second_last->next = NULL;
	stack->head = last;
}

void	rra(t_stack *stack_a)
{
	reverse(stack_a);
	write(1, "rra\n", 4);
}

void	rrb(t_stack *stack_b)
{
	reverse(stack_b);
	write(1, "rrb\n", 4);
}

void	rrr(t_stack *stack_a, t_stack *stack_b)
{
	reverse(stack_a);
	reverse(stack_b);
	write(1, "rrr\n", 4);
}
