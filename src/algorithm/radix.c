/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plopes-c <plopes-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 20:37:04 by plopes-c          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2023/05/03 20:07:31 by plopes-c         ###   ########.fr       */
=======
/*   Updated: 2023/04/28 03:22:46 by plopes-c         ###   ########.fr       */
>>>>>>> c72e122965fc7449e8a27038cc29df4459355e2d
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
	if (stack_a()->len <= 11)
		sort_under_50();
	// if (stack_a()->num_min < 0)
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

void	negatives_to_b(void)
{
	t_list	*temp;

	temp = stack_a()->head;
	while (temp)
	{
		if ((int)(intptr_t)temp->content < 0)
			pb();
		temp = temp->next;
	}
}
