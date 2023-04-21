/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plopes-c <plopes-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 20:37:04 by plopes-c          #+#    #+#             */
/*   Updated: 2023/04/21 20:02:51 by plopes-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	stack_find_max(t_stack *stack)
{
	t_list	*list;
	int		max;

	max = 0;
	list = stack->head;
	max = (intptr_t)list->content;
	while (list != NULL)
	{
		if (max < (intptr_t)list->content)
			max = (intptr_t)list->content;
		list = list->next;
	}
	stack->num_max = max;
	ft_printf("MAX: %i\n", stack->num_max);
	return (max);
}

void radix()
{
	int		bit;
	int		len_a;

	bit = 0;
	while (bit < 32)
	{
		if (!is_sorted(stack_a()))
			break ;
		len_a = ft_lstsize(stack_a()->head);
		while (len_a > 0)
		{
			if (!is_sorted(stack_a()))
				break ;
			if ((intptr_t)stack_a()->head->content & (1 << bit))
				pb();
			else
				ra();
			len_a--;
		}
		while (stack_b()->head)
			pa();
		bit++;
	}
}
