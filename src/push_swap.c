/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plopes-c <plopes-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 14:41:58 by chales            #+#    #+#             */
/*   Updated: 2023/04/28 03:19:36 by plopes-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char *argv[])
{
	if (argc >= 2)
	{
		while (*(argv + 1))
		{
			stack_init(ft_split(*(argv + 1), ' '));
			argv++;
		}
		if (!stack_a()->head)
			error_msg("Error\n");
		is_sorted(stack_a());
		get_values();
		negatives_to_b();
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
		stack_print(stack_a());
		stack_print(stack_b());
		free_lists();
		exit(EXIT_SUCCESS);
	}
	error_msg("Error\n");
}

// stack_print(stack_a());