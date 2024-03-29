/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plopes-c <plopes-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 00:12:52 by plopes-c          #+#    #+#             */
/*   Updated: 2023/04/26 05:44:32 by plopes-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static	void	push(t_stack *src, t_stack *dest)
{
	t_list	*temp;

	if (!src->head)
		return ;
	temp = src->head;
	src->head = src->head->next;
	ft_lstadd_front(&dest->head, temp);
}

void	pa(void)
{
	push(stack_b(), stack_a());
	write(1, "pa\n", 3);
}

void	pb(void)
{
	push(stack_a(), stack_b());
	write(1, "pb\n", 3);
}
