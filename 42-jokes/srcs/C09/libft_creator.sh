#!/bin/bash
# compiling all the library
gcc -Wall -Wextra -Werror -c ft_putchar.c ft_putstr.c ft_strcmp.c ft_strlen.c ft_swap.c
# creating our .o files(library) in libft.a
ar rc libft.a ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o
# open our file
ranlib libft.a