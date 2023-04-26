/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plopes-c <plopes-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/21 12:34:08 by plopes-c          #+#    #+#             */
/*   Updated: 2023/04/26 04:58:40 by plopes-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	check_repeat(t_stack *stack, int num)
{
	t_list	*list;

	list = stack->head;
	while (list != NULL)
	{
		if ((int)(long)list->content == num)
			error_msg("Error! Repeated Character Found!\n");
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
			error_msg("Error! Invalid Character Found!\n");
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
			error_msg("Error! Number Too Small!\n");
	}
	else if (len > 10 || (len == 10 && ft_strncmp(num, "2147483647", 50) > 0))
		error_msg("Error! Number Too Big!\n");
}

int	get_num(char *num)
{
	int	input;

	check_digit(num);
	check_max_min(num);
	input = ft_atoi(num);
	check_repeat(stack_a(), input);
	return (input);
}
