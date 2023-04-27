/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_5.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plopes-c <plopes-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 05:51:30 by plopes-c          #+#    #+#             */
/*   Updated: 2023/04/27 16:47:19 by plopes-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	min_to_stack_b(int times)
{
	int	i;
	int	count;

	count = 0;
	while (count < times)
	{
		if (stack_a()->min_pos < stack_a()->len / 2)
		{
			i = 0;
			while (i++ < stack_a()->min_pos)
				ra();
		}
		else
		{
			i = stack_a()->len;
			while (i-- > stack_a()->min_pos)
				rra();
		}
		pb();
		get_values();
		count++;
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
