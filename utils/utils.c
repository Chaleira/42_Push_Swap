/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plopes-c <plopes-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 21:29:23 by plopes-c          #+#    #+#             */
/*   Updated: 2023/04/11 21:31:19 by plopes-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	stack_print(t_stack *stack)
{
	t_list	*list;

	list = stack->head;
	while (list != NULL)
	{
		ft_printf("%d\n", list->content);
		list = list->next;
	}
}
