/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plopes-c <plopes-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 14:41:58 by chales            #+#    #+#             */
/*   Updated: 2023/05/03 20:29:52 by plopes-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char *argv[])
{
	(void)argc;
	while (*(argv + 1))
	{
		(stack_a())->num = ft_split(*(argv + 1), ' ');
		stack_init();
		argv++;
	}
	is_sorted(stack_a());
	new_value();
	get_values();
	if (stack_a()->len <= 3)
		sort_3();
	else if (stack_a()->len == 4)
		sort_4();
	else if (stack_a()->len <= 5)
		sort_5();
	else if (stack_a()->len <= 10)
	{
		sort_10();
	}
	else
		radix();
	free_lists();
}

// stack_print(stack_a());