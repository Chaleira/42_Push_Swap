/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plopes-c <plopes-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 04:19:47 by plopes-c          #+#    #+#             */
/*   Updated: 2023/05/03 16:53:47 by plopes-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_3(void)
{
	int	a;
	int	b;
	int	c;

	c = 0;
	b = 0;
	a = 0;
	if (stack_a()->head)
		a = (int)(intptr_t)stack_a()->head->content;
	if (stack_a()->len > 1)
		b = (int)(intptr_t)stack_a()->head->next->content;
	if (stack_a()->len > 2)
		c = (int)(intptr_t)stack_a()->head->next->next->content;
	if (a > b && stack_a()->len == 2)
		sa();
	else
		sort_3_aux(a, b, c);
}

void	sort_3_aux(int a, int b, int c)
{
	if (a < b && b > c && a > c)
		rra();
	else if (a > b && b < c && a > c)
		ra();
	else if (a < b && b > c && a < c)
	{
		sa();
		ra();
	}
	else if (a > b && b < c && a < c)
		sa();
	else if (a > b && b > c && a > c)
	{
		ra();
		sa();
	}
}
