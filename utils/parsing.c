/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plopes-c <plopes-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 15:39:17 by plopes-c          #+#    #+#             */
/*   Updated: 2023/04/11 21:35:37 by plopes-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	stack_init(char **num, t_stack *stack)
{
	int	i;

	i = 1;
	while (num[i] != NULL)
	{
		if (num[i][0] && ft_isdigit(num[i][0]))
		{
			ft_lstadd_back(&stack->head,
				ft_lstnew((void *)(intptr_t)ft_atoi(num[i])));
		}
		i++;
	}
}
