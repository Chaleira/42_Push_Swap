/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plopes-c <plopes-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 15:39:17 by plopes-c          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2023/05/03 19:36:06 by plopes-c         ###   ########.fr       */
=======
/*   Updated: 2023/04/28 01:59:39 by plopes-c         ###   ########.fr       */
>>>>>>> c72e122965fc7449e8a27038cc29df4459355e2d
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	stack_init(void)
{
	int		i;

	i = 0;
<<<<<<< HEAD
	if (!stack_a()->num[i])
		error_msg("Error\n");
	while (stack_a()->num[i] != NULL)
=======
	if (!num || !num[i])
		return ;
	while (num[i] != NULL)
>>>>>>> c72e122965fc7449e8a27038cc29df4459355e2d
	{
		if (stack_a()->num[i][0])
		{
			ft_lstadd_back(&stack_a()->head,
				ft_lstnew((void *)(intptr_t)get_num(stack_a()->num[i])));
		}
		i++;
	}
<<<<<<< HEAD
	free_split(stack_a()->num);
}
=======
	free_split(num);
}

// ft_printf("MAX_NUM_LEN: %i\nMIN_POS: %i\nMAX: %i\nMIN: %i\nLEN: %i\n",
		// stack_a()->len_max, stack_a()->min_pos, stack_a()->num_max
		// ,stack_a()->num_min, stack_a()->len);
>>>>>>> c72e122965fc7449e8a27038cc29df4459355e2d
