/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plopes-c <plopes-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 14:41:58 by chales            #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2023/05/03 19:39:11 by plopes-c         ###   ########.fr       */
=======
/*   Updated: 2023/04/28 03:19:36 by plopes-c         ###   ########.fr       */
>>>>>>> c72e122965fc7449e8a27038cc29df4459355e2d
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char *argv[])
{
<<<<<<< HEAD
	if (argc == 1)
		error_msg("Error\n");
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
=======
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
>>>>>>> c72e122965fc7449e8a27038cc29df4459355e2d
}

// stack_print(stack_a());