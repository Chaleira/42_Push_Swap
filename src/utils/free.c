/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plopes-c <plopes-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 20:28:09 by plopes-c          #+#    #+#             */
/*   Updated: 2023/04/21 13:46:31 by plopes-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	list_free(t_list *lst)
{
	t_list	*ptr;
	t_list	*last;

	if (!lst)
		return ;
	ptr = lst;
	while (ptr)
	{
		last = ptr;
		ptr = ptr->next;
		free(last);
	}
	lst = NULL;
}

void	free_lists(void)
{
	list_free(stack_a()->head);
	list_free(stack_b()->head);
}
