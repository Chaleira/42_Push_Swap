/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_10.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plopes-c <plopes-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 07:00:22 by plopes-c          #+#    #+#             */
/*   Updated: 2023/04/27 14:58:04 by plopes-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_10(void)
{
	min_to_stack_b(stack_a()->len - 3);
	sort_5();
	while (stack_b()->head)
		pa();
}
