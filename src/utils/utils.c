/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plopes-c <plopes-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 21:29:23 by plopes-c          #+#    #+#             */
/*   Updated: 2023/04/18 20:25:52 by plopes-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	stack_print(t_stack *stack_a, t_stack *stack_b)
{
	t_list	*list_a;
	t_list	*list_b;

	ft_printf("STAKCS:\n");
	list_a = stack_a->head;
	list_b = stack_b->head;
	while (list_a != NULL || list_b != NULL)
	{
		if (list_a != NULL)
		{
			ft_printf("%d ", list_a->content);
			list_a = list_a->next;
		}
		if (list_b != NULL)
		{
			ft_printf("%d\n", list_b->content);
			list_b = list_b->next;
		}
		else
			ft_printf("\n");
	}
	ft_printf("_ _\n");
	ft_printf("a b\n");
}

int	ft_strlen_no_zero(char *str)
{
	int	i;

	while (*str == '0')
		str++;
	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}
