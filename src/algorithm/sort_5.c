/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_5.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plopes-c <plopes-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 05:51:30 by plopes-c          #+#    #+#             */
/*   Updated: 2023/05/03 19:03:17 by plopes-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	min_to_stack_b(int times)
{
	int	count;

	count = 0;
	while (count < times)
	{
		min_to_stack_b_aux();
		is_sorted(stack_a());
		pb();
		get_values();
		count++;
	}
}

void	min_to_stack_b_aux(void)
{
	int	i;

	is_sorted(stack_a());
	if (stack_a()->min_pos < stack_a()->len / 2)
	{
		i = 0;
		while (i++ < stack_a()->min_pos)
		{
			is_sorted(stack_a());
			ra();
		}
	}
	else
	{
		i = stack_a()->len;
		while (i-- > stack_a()->min_pos)
		{
			is_sorted(stack_a());
			rra();
		}
	}
}

void	sort_4(void)
{
	min_to_stack_b(1);
	sort_3();
	pa();
}

void	sort_5(void)
{
	min_to_stack_b(2);
	sort_3();
	pa();
	pa();
}
