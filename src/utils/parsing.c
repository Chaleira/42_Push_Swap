/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plopes-c <plopes-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 15:39:17 by plopes-c          #+#    #+#             */
/*   Updated: 2023/04/21 19:54:48 by plopes-c         ###   ########.fr       */
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
	// stack_find_max(stack_a());
	// max_len(stack_a());
}
