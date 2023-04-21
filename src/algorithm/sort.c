/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plopes-c <plopes-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 16:38:23 by plopes-c          #+#    #+#             */
/*   Updated: 2023/04/21 19:39:45 by plopes-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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
