/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plopes-c <plopes-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 16:38:23 by plopes-c          #+#    #+#             */
/*   Updated: 2023/04/21 17:52:18 by plopes-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	simple_sort(void)
{
	t_list	*temp;

	while (is_sorted(stack_a()))
	{
		temp = stack_a()->head;
		while (temp->next)
			temp = temp->next;
		if (stack_a()->head->content > stack_a()->head->next->content)
			sa();
		if (stack_a()->head > temp)
			ra();
	}
}

int	is_sorted(t_stack *stack)
{
	t_list	*temp;

	temp = stack->head;
	while (temp->next)
	{
		if (temp->content < temp->next->content)
			return (1);
		temp = temp->next;
	}
	return (0);
}
