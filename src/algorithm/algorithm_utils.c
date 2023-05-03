/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algorithm_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plopes-c <plopes-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 05:56:47 by plopes-c          #+#    #+#             */
/*   Updated: 2023/05/03 19:11:47 by plopes-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	stack_find_max_min(t_stack *stack)
{
	t_list	*list;
	int		max;
	int		min;

	max = 0;
	min = 2147483647;
	list = stack->head;
	if (!list)
		return (0);
	max = (intptr_t)list->content;
	while (list != NULL)
	{
		if (max < (intptr_t)list->content)
			max = (intptr_t)list->content;
		if (min > (intptr_t)list->content)
			min = (intptr_t)list->content;
		list = list->next;
	}
	stack->num_max = max;
	stack->num_min = min;
	find_min_pos(stack);
	return (max);
}

void	find_min_pos(t_stack *stack)
{
	t_list	*temp;
	int		i;

	i = 0;
	temp = stack->head;
	while (temp)
	{
		if ((int)(intptr_t)temp->content == stack->num_min)
		{
			stack->min_pos = i;
			return ;
		}
		temp = temp->next;
		i++;
	}
	stack->min_pos = i;
}
