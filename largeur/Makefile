##
## Makefile for Makefile in /home/zaczyk_a/rendu/dante/dante
## 
## Made by Antoine ZACZYK
## Login   <zaczyk_a@epitech.net>
## 
## Started on  Mon May 30 01:30:36 2016 Antoine ZACZYK
## Last update Mon May 30 01:30:38 2016 Antoine ZACZYK
##

SRC=		main.c		\
		remp_tab.c	\
		find_path.c	\
		tools.c

OBJ=            $(SRC:.c=.o)

CFLAGS=		-Wall -Werror -Wextra

NAME=           solver

all:            $(NAME)


$(NAME):	$(OBJ)
		gcc -o $(NAME) $(OBJ)

clean:
		rm -f $(OBJ)

fclean:		clean
		rm -f $(NAME)

re:		fclean all
