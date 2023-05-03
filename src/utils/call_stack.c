/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   call_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plopes-c <plopes-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 13:38:25 by plopes-c          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2023/05/03 16:30:05 by plopes-c         ###   ########.fr       */
=======
/*   Updated: 2023/04/28 02:32:59 by plopes-c         ###   ########.fr       */
>>>>>>> c72e122965fc7449e8a27038cc29df4459355e2d
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
