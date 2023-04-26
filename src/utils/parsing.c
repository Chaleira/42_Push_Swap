/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plopes-c <plopes-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 15:39:17 by plopes-c          #+#    #+#             */
/*   Updated: 2023/04/26 08:02:06 by plopes-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	stack_init(char **num)
{
	int		i;

	i = 1;
	while (num[i] != NULL)
	{
		if (num[i][0])
		{
			ft_lstadd_back(&stack_a()->head,
				ft_lstnew((void *)(intptr_t)get_num(num[i])));
		}
		i++;
	}
	is_sorted(stack_a());
	get_values();
}

// ft_printf("MAX_NUM_LEN: %i\nMIN_POS: %i\nMAX: %i\nMIN: %i\nLEN: %i\n",
		// stack_a()->len_max, stack_a()->min_pos, stack_a()->num_max
		// ,stack_a()->num_min, stack_a()->len);