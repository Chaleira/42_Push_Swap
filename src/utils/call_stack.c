/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   call_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plopes-c <plopes-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 13:38:25 by plopes-c          #+#    #+#             */
/*   Updated: 2023/05/03 20:28:06 by plopes-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*stack_a(void)
{
	static t_stack	stack;

	return (&stack);
}

t_stack	*stack_b(void)
{
	static t_stack	stack;

	return (&stack);
}

void	stack_print(t_stack *stack)
{
	t_list	*list;

	ft_printf("\nSTACK:\n");
	list = stack->head;
	while (list != NULL)
	{
		ft_printf("%d ", (int)(intptr_t)list->content);
		list = list->next;
	}
	ft_printf("\n");
}
