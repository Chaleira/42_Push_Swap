/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plopes-c <plopes-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 15:39:17 by plopes-c          #+#    #+#             */
/*   Updated: 2023/04/28 01:59:39 by plopes-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// #define DEBUG1

void	stack_init(char **num)
{
	int		i;

	i = 0;
	if (!num || !num[i])
		return ;
	while (num[i] != NULL)
	{
		if (num[i][0])
		{
			ft_lstadd_back(&stack_a()->head,
				ft_lstnew((void *)(intptr_t)get_num(num[i])));
		}
		i++;
	}
	free_split(num);
}

// ft_printf("MAX_NUM_LEN: %i\nMIN_POS: %i\nMAX: %i\nMIN: %i\nLEN: %i\n",
		// stack_a()->len_max, stack_a()->min_pos, stack_a()->num_max
		// ,stack_a()->num_min, stack_a()->len);