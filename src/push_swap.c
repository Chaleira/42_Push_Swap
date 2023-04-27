/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plopes-c <plopes-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 14:41:58 by chales            #+#    #+#             */
/*   Updated: 2023/04/27 17:01:20 by plopes-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char *argv[])
{
	if (argc < 2)
		error_msg("Error\n");
	while (*(argv + 1))
	{
		stack_init(ft_split(*(argv + 1), ' '));
		argv++;
	}
	is_sorted(stack_a());
	get_values();
	if (stack_a()->len <= 3)
		sort_3();
	else if (stack_a()->len == 4)
		sort_4();
	else if (stack_a()->len <= 5)
		sort_5();
	else if (stack_a()->len <= 10)
		sort_10();
	else
		radix();
	// stack_print(stack_a(), stack_b());
	free_lists();
}

// stack_print(stack_a(), stack_b());