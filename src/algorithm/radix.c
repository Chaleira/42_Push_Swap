/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plopes-c <plopes-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 20:37:04 by plopes-c          #+#    #+#             */
/*   Updated: 2023/04/21 15:46:34 by plopes-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	stack_find_max(t_stack *stack)
{
	t_list	*list;
	int		max;

	max = 0;
	list = stack->head;
	max = (int)(long)list->content;
	while (list != NULL)
	{
		if (max < (int)(long)list->content)
			max = (int)(long)list->content;
		list = list->next;
	}
	stack->num_max = max;
	ft_printf("MAX: %i\n", stack->num_max);
	return (max);
}
