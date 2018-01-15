##
## Makefile for makefile in /home/abrun/delivery/CPool_Day12/cat
## 
## Made by Alexandre Brun
## Login   <abrun@epitech.net>
## 
## Started on  Tue Oct 18 15:50:58 2016 Alexandre Brun
## Last update Tue Oct 18 18:29:15 2016 Alexandre Brun
##

RM	= rm -f

CC	= gcc

CP	= cp

CFLAGS	+= -Wextra -Wall -Werror

SRC	= 	main.c		\
		my_putnbr.c	\
		my_putstr.c	\
		my_putchar.c	\

OBJ	=	$(SRC:.c=.o)

NAME	=	cat

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(OBJ) -o $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
