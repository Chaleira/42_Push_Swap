/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   call_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plopes-c <plopes-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 13:38:25 by plopes-c          #+#    #+#             */
/*   Updated: 2023/05/03 16:30:05 by plopes-c         ###   ########.fr       */
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
