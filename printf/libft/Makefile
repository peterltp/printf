# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ple- <marvin@42.fr>                        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/25 15:04:24 by ple-              #+#    #+#              #
#    Updated: 2022/11/18 14:50:57 by ple-             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRCS = ft_atoi.c\
	   ft_isalnum.c\
	   ft_isalpha.c\
	   ft_isascii.c\
	   ft_isdigit.c\
	   ft_isprint.c\
	   ft_strlen.c\
	   ft_strncmp.c\
	   ft_strchr.c\
	   ft_strrchr.c\
	   ft_memset.c\
	   ft_bzero.c\
	   ft_tolower.c\
	   ft_toupper.c\
	   ft_strlcpy.c\
	   ft_putchar_fd.c\
	   ft_memcpy.c\
	   ft_memchr.c\
	   ft_memcmp.c\
	   ft_strlcat.c\
	   ft_strnstr.c\
	   ft_memmove.c\
	   ft_calloc.c\
	   ft_strdup.c\
	   ft_putstr_fd.c\
	   ft_putnbr_fd.c\
	   ft_putendl_fd.c\
	   ft_substr.c\
	   ft_strjoin.c\
	   ft_strtrim.c\
	   ft_strmapi.c\
	   ft_split.c\
	   ft_striteri.c\
	   ft_itoa.c

OBJS = ft_atoi.o\
	   ft_isalnum.o\
	   ft_isalpha.o\
	   ft_isascii.o\
	   ft_isdigit.o\
	   ft_isprint.o\
	   ft_strlen.o\
	   ft_strncmp.o\
	   ft_strchr.o\
	   ft_strrchr.o\
	   ft_memset.o\
	   ft_bzero.o\
	   ft_tolower.o\
	   ft_toupper.o\
	   ft_strlcpy.o\
	   ft_putchar_fd.o\
	   ft_memcpy.o\
	   ft_memchr.o\
	   ft_memcmp.o\
	   ft_strlcat.o\
	   ft_strnstr.o\
	   ft_memmove.o\
	   ft_calloc.o\
	   ft_strdup.o\
	   ft_putstr_fd.o\
	   ft_putnbr_fd.o\
	   ft_putendl_fd.o\
	   ft_substr.o\
	   ft_strjoin.o\
	   ft_strtrim.o\
	   ft_strmapi.o\
	   ft_split.o\
	   ft_striteri.o\
	   ft_itoa.o
BONUS_SRC = ft_lstnew.c
BONUS_OBJ = ft_lstnew.o

CC = cc
RM = rm -f

CFLAGS = -Wall -Wextra -Werror

$(NAME): $(OBJS)
		
		ar rcs $(NAME) $(OBJS)
bonus: $(BONUS_OBJ)
		ar rus $(NAME) $(BONUS_OBJ)
all : $(NAME)


clean: 
		$(RM) $(OBJS) $(BONUS_OBJ) 
fclean: clean
		$(RM) $(NAME)
re: 	fclean all

.PHONY: all bonus clean fclean re
