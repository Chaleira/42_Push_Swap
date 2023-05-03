/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plopes-c <plopes-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 12:34:08 by plopes-c          #+#    #+#             */
/*   Updated: 2023/05/03 20:28:17 by plopes-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	check_repeat(t_stack *stack, int num)
{
	t_list	*list;

	list = stack->head;
	while (list != NULL)
	{
		if ((int)(intptr_t)list->content == num)
			error_msg("Error\n");
		list = list->next;
	}
}

void	check_digit(char *num)
{
	int	i;

	i = 0;
	if ((num[0] == '-' || num[0] == '+') && num[1])
		i++;
	while (num[i])
	{
		if (!ft_isdigit(num[i]))
			error_msg("Error\n");
		i++;
	}
}

void	check_max_min(char *num)
{
	int	len;

	len = ft_strlen_no_zero(num);
	if (num[0] == '-')
	{
		if (len > 11 || (len == 11 && ft_strncmp(num, "-2147483648", 50) > 0))
			error_msg("Error\n");
	}
	else if (num[0] == '+')
	{
		if (len > 11 || (len == 11 && ft_strncmp(num, "+2147483647", 50) > 0))
			error_msg("Error\n");
	}
	else if (len > 10 || (len == 10 && ft_strncmp(num, "2147483647", 50) > 0))
		error_msg("Error\n");
}

int	get_num(char *num)
{
	int	input;

	if (!num)
		error_msg("Error\n");
	check_digit(num);
	check_max_min(num);
	input = ft_atoi(num);
	check_repeat(stack_a(), input);
	return (input);
}

void	new_value(void)
{
	t_list	*temp;
	t_list	*temp2;
	t_list	*new;
	int		i;

	i = 0;
	new = NULL;
	temp = stack_a()->head;
	temp2 = stack_a()->head;
	while (temp)
	{
		while (temp2)
		{
			if ((int)(intptr_t)temp->content
				> (int)(intptr_t)temp2->content)
				i++;
			temp2 = temp2->next;
		}
		ft_lstadd_back(&new, ft_lstnew((void *)(intptr_t)i + 1));
		i = 0;
		temp2 = stack_a()->head;
		temp = temp->next;
	}
	list_free(stack_a()->head);
	stack_a()->head = new;
}
