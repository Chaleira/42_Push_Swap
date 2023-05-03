/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plopes-c <plopes-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 15:39:17 by plopes-c          #+#    #+#             */
/*   Updated: 2023/05/03 20:29:28 by plopes-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	stack_init(void)
{
	int		i;

	i = 0;
	if (!stack_a()->num[i])
		error_msg("Error\n");
	while (stack_a()->num[i] != NULL)
	{
		if (stack_a()->num[i][0])
		{
			ft_lstadd_back(&stack_a()->head,
				ft_lstnew((void *)(intptr_t)get_num(stack_a()->num[i])));
		}
		i++;
	}
	free_split(stack_a()->num);
}
