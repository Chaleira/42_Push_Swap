/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plopes-c <plopes-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 14:41:58 by chales            #+#    #+#             */
/*   Updated: 2023/04/17 20:57:50 by plopes-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char *argv[])
{
	static t_stack	stack_a;
	static t_stack	stack_b;

	if (argc < 2)
	{
		ft_printf("Invalid Stack!\n");
		return (1);
	}
	stack_init(argv, &stack_a);
	stack_find_max(&stack_a);
	stack_print(&stack_a, &stack_b);
	list_free(stack_a.head);
	list_free(stack_b.head);
}
