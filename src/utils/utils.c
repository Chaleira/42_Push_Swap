/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plopes-c <plopes-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 21:29:23 by plopes-c          #+#    #+#             */
/*   Updated: 2023/04/21 16:27:45 by plopes-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	stack_print(t_stack *stack_a, t_stack *stack_b)
{
	t_list	*list_a;
	t_list	*list_b;
	int		len;

	ft_printf("\nSTAKCS:\n\n");
	list_a = stack_a->head;
	list_b = stack_b->head;
	len = stack_a->len_max;
	while (list_a != NULL || list_b != NULL)
	{
		if (list_a != NULL)
		{
			ft_printf("%d", list_a->content);
			list_a = list_a->next;
		}
		while (len-- > 0)
			ft_printf(" ");
		if (list_b != NULL)
		{
			ft_printf("   |%d\n", list_b->content);
			list_b = list_b->next;
		}
		else
			ft_printf("\n");
		len = stack_a->len_max;
	}
	ft_printf("_");
	while (len-- > 0)
		ft_printf(" ");
	ft_printf("   _\n");
	ft_printf("a");
	len++;
	while (len++ < stack_a->len_max)
		ft_printf(" ");
	ft_printf("   b\n");
}

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
	free_lists();
	exit(EXIT_FAILURE);
}

int max_len(t_stack *stack)
{
	int 	max;
	char 	*max_str;
	int		len;

	len = 0;
	max = stack->num_max;
	max_str = ft_itoa(max);
	len = ft_strlen(max_str);
	free(max_str);
	stack->len_max = len;
	ft_printf("MAX_LEN: %i\n", len);
	return (len);
}
