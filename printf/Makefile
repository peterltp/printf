# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ple- <marvin@42.fr>                        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/02 13:45:35 by ple-              #+#    #+#              #
#    Updated: 2022/12/07 13:36:30 by ple-             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= libftprintf.a

CC			= gcc
CFLAGS		= -Wall -Wextra -Werror

AR			= ar
ARFLAGS		= rcs

RM			= rm -rf

INCDIR		= ./includes
INCS		= -I$(INCDIR)
LIBFT		= ./libft

SRCS		= ./srcs/ft_printf.c	\
			  ./srcs/ft_format.c	\
			  ./srcs/ft_check_base.c	\
			  ./srcs/ft_print_char_str.c \
			  ./srcs/ft_print_thing.c	\

OBJS 		= $(SRCS:.c=.o)

%.o : %.c
	$(CC) $(CFLAGS) $(INCS) -c $< -o $@

$(NAME) : $(OBJS)
	@make -C $(LIBFT)
	@cp $(LIBFT)/libft.a $(NAME)
	@ar rcs $@ $?

all : $(NAME)

clean : 
	$(RM) $(OBJS)
	@make clean -C $(LIBFT)

fclean : clean
	$(RM) $(NAME)
	@make fclean -C $(LIBFT)

re:	clean all

.PHONY: all clean fclean re
