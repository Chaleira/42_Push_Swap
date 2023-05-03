/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plopes-c <plopes-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 21:29:23 by plopes-c          #+#    #+#             */
/*   Updated: 2023/05/03 19:58:13 by plopes-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_strlen_no_zero(char *str)
{
	int	i;

	while (*str == '0')
		str++;
	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

void	error_msg(char *error)
{
	if (error)
		ft_printf("%s", error);
	if (stack_a()->num)
		free_split(stack_a()->num);
	free_lists();
	exit(EXIT_FAILURE);
}

void	get_values(void)
{
	stack_find_max_min(stack_a());
	stack_find_max_min(stack_b());
	stack_a()->len = ft_lstsize(stack_a()->head);
	stack_b()->len = ft_lstsize(stack_b()->head);
}

// void	stack_print(t_stack *stack_a, t_stack *stack_b)
// {
// 	t_list	*list_a;
// 	t_list	*list_b;
// 	int		len;

// 	ft_printf("\nSTAKCS:\n\n");
// 	list_a = stack_a->head;
// 	list_b = stack_b->head;
// 	len = stack_a->len_max;
// 	while (list_a != NULL || list_b != NULL)
// 	{
// 		if (list_a != NULL)
// 		{
// 			ft_printf("%d", list_a->content);
// 			list_a = list_a->next;
// 		}
// 		while (len-- > 0)
// 			ft_printf(" ");
// 		if (list_b != NULL)
// 		{
// 			ft_printf("   |%d\n", list_b->content);
// 			list_b = list_b->next;
// 		}
// 		else
// 			ft_printf("\n");
// 		len = stack_a->len_max;
// 	}
// 	ft_printf("_");
// 	while (len-- > 0)
// 		ft_printf(" ");
// 	ft_printf("   _\n");
// 	ft_printf("a");
// 	len++;
// 	while (len++ < stack_a->len_max)
// 		ft_printf(" ");
// 	ft_printf("   b\n");
// }

// void	debug(void)
// {
// 	ft_printf("HERE!!!\n");
// }