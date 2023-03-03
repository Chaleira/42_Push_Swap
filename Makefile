# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: chales <chales@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/03 14:41:56 by chales            #+#    #+#              #
#    Updated: 2023/03/03 14:47:06 by chales           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

LIBFT = libft/libft.a

SRCS = push_swap.c

OBJS = push_swap.o

CFLAGS = -Wall -Wextra -Werror

RM = rm -fr

all : $(NAME)

$(NAME):		$(OBJS)
				@make -s -C libft
				@gcc $(CFLAGS) $(OBJS) $(LIBFT) -o $(NAME)

clean:			
				@make clean -s -C libft
				@$(RM) $(OBJS)

fclean:			clean
				@make fclean -s -C libft
				@$(RM) $(NAME)

re:				fclean $(NAME)
				@make re -s -C libft