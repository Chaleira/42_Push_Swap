/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plopes-c <plopes-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 16:38:23 by plopes-c          #+#    #+#             */
/*   Updated: 2023/05/03 18:54:13 by plopes-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_sorted(t_stack *stack)
{
	t_list	*temp;

	temp = stack->head;
	while (temp->next)
	{
		if ((int)(intptr_t)temp->content > (int)(intptr_t)temp->next->content)
			return (1);
		temp = temp->next;
	}
	if (!stack_b()->head)
	{
		free_lists();
		exit(EXIT_SUCCESS);
	}
	return (1);
}
