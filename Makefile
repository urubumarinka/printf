# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: maborges <maborges@student.42berlin.de>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/11 11:01:03 by maborges          #+#    #+#              #
#    Updated: 2024/12/12 15:07:36 by maborges         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# My program name and libft var
NAME = libftprintf.a
LIBFT_DIR = ../libft
LIBFT = $(LIBFT_DIR)/libft.a

#Compiler and flags
CC = cc
CFLAGS = -Wall -Wextra -Werror

#Source files
SRCS =	ft_printf.c \
		ft_putchar.C \
		ft_putnbr.c \
		ft_putstr.c \

# Object files
OBJS = $(SRCS:.c=.o)

#Default rule to compile the program
all: $(LIBFT) $(NAME)

$(LIBFT):
	$(MAKE) -C $(LIBFT_DIR)

#Rule to link the object files into executable, create static lib and update the index of static lib
$(NAME): $(OBJS)
	$(MAKE) -C ./libft
	cp libft/libft.a $(NAME)
	ar rcs $(NAME) $(OBJS)

#Rule to compile the source files into object files
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

#For make main
main: $(NAME)
	$(CC) $(CFLAGS) main.c $(NAME) -o main

#Clean rule to remove object files
clean:
	$(MAKE) clean -C ./libft
	rm -f $(OBJS)

#Fclean rule to remove object files and executable
fclean: clean
	$(MAKE) fclean -C $(LIBFT_DIR)
	rm -f $(NAME)

#Rule to clean and recompile everything
re: fclean all

#Phony targets to prevent conflicts with files
.PHONY: all clean fclean re
