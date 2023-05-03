/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plopes-c <plopes-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 20:37:04 by plopes-c          #+#    #+#             */
/*   Updated: 2023/05/03 20:07:31 by plopes-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	radix(void)
{
	int		bit;
	int		bit_max;
	int		len_a;

	bit = 0;
	bit_max = max_bit();
	if (stack_a()->len < 50)
		sort_under_50();
	while (bit <= bit_max)
	{
		is_sorted(stack_a());
		len_a = stack_a()->len;
		while (len_a > 0)
		{
			is_sorted(stack_a());
			if ((intptr_t)stack_a()->head->content & (1 << bit))
				ra();
			else
				pb();
			len_a--;
		}
		while (stack_b()->head)
			pa();
		bit++;
	}
}

int	max_bit(void)
{
	int	i;

	i = 31;
	while (!(stack_a()->num_max & (1 << i)) && i > 0)
		i--;
	return (i);
}

void	sort_under_50(void)
{
	min_to_stack_b(stack_a()->len - 1);
	while (stack_b()->head)
		pa();
}
