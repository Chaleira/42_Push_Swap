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

SRCS = $(shell find src/ -name '*.c')

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