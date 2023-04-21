/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plopes-c <plopes-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 14:41:58 by chales            #+#    #+#             */
/*   Updated: 2023/04/21 19:54:36 by plopes-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char *argv[])
{
	(void)argv;
	if (argc < 2)
		error_msg("Error! Invalid Stack!");
	stack_init(argv);
	// stack_print(stack_a(), stack_b());
	radix();
	// stack_print(stack_a(), stack_b());
	free_lists();
}
