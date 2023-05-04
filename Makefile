# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: plopes-c <plopes-c@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/03/03 14:41:56 by chales            #+#    #+#              #
#    Updated: 2023/04/18 22:38:17 by plopes-c         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

LIBFT = libft/libft.a

SRCS =	src/push_swap.c src/algorithm/algorithm_utils.c src/algorithm/radix.c \
		src/algorithm/sort_10.c src/algorithm/sort_3.c src/algorithm/sort_5.c \
		src/algorithm/sort.c src/moves/push.c src/moves/reverse_rotate.c \
		src/moves/rotate.c src/moves/swap.c src/utils/call_stack.c \
		src/utils/check.c src/utils/free.c src/utils/parsing.c \
		src/utils/utils.c

OBJS = $(SRCS:.c=.o)

INCLUDES = -I./includes

CFLAGS = -Wall -Wextra -Werror -fPIE $(INCLUDES)

RM = rm -fr

all : $(NAME)

$(NAME):		$(OBJS)
				@make bonus -s -C libft
				@gcc $(CFLAGS) $(OBJS) $(LIBFT) -o $(NAME)

clean:			
				@make clean -s -C libft
				@$(RM) $(OBJS)

fclean:			clean
				@make fclean -s -C libft
				@$(RM) $(NAME)

re:				fclean $(NAME)
				@make re -s -C libft