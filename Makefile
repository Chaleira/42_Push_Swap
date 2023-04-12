# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: plopes-c <plopes-c@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/03 14:41:56 by chales            #+#    #+#              #
#    Updated: 2023/04/12 20:41:52 by plopes-c         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

LIBFT = libft/libft.a

SRCS = 	push_swap.c \
		utils/list_manipulation.c \
		utils/parsing.c \
		utils/push.c \
		utils/reverse_rotate.c \
		utils/rotate.c \
		utils/swap.c \
		utils/free.c \
		utils/utils.c \
		algorithm/radix.c

OBJS = $(SRCS:.c=.o)

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