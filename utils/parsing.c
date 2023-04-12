/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plopes-c <plopes-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 15:39:17 by plopes-c          #+#    #+#             */
/*   Updated: 2023/04/12 22:08:17 by plopes-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	stack_init(char **num, t_stack *stack)
{
	int		i;
	int		input;
	int		len;

	i = 1;
	while (num[i] != NULL)
	{
		len = ft_strlen_no_zero(num[i]);
		input = ft_atoi(num[i]);
		if (num[i][0] == '-')
		{
			if (len - 1 >= 10 && ft_strncmp(num[i] + 1, "2147483648", 50) > 0)
				exit(EXIT_FAILURE);
		}
		else if (len >= 10 && ft_strncmp(num[i], "2147483647", 50) > 0)
			exit(EXIT_FAILURE);
		if (check_repeat(stack, input))
			exit(EXIT_FAILURE);
		if (num[i][0])
		{
			ft_lstadd_back(&stack->head,
				ft_lstnew((void *)(long)input));
		}
		i++;
	}
}

int	check_repeat(t_stack *stack, int num)
{
	t_list	*list;

	list = stack->head;
	while (list != NULL)
	{
		if ((int)(long)list->content == num)
			return (1);
		list = list->next;
	}
	return (0);
}
