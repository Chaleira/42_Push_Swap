/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plopes-c <plopes-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 14:41:58 by chales            #+#    #+#             */
/*   Updated: 2023/04/26 08:52:26 by plopes-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char *argv[])
{
	(void)argv;
	if (argc < 2)
		error_msg("Error! Invalid Stack!");
	if (argc == 2)
		exit(EXIT_SUCCESS);
	stack_init(argv);
	if (argc <= 4)
		sort_3();
	else if (argc == 5)
		sort_4();
	else if (argc <= 6)
		sort_5();
	else if (argc <= 11)
		sort_10();
	else
		radix();
	free_lists();
}

// stack_print(stack_a(), stack_b());