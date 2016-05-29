##
## Makefile for dnte in /home/fossae_t/rendu/dante/perfect
## 
## Made by Thomas Fossaert
## Login   <fossae_t@epitech.net>
## 
## Started on  Thu May 19 10:02:57 2016 Thomas Fossaert
## Last update Mon May 30 01:30:59 2016 Antoine ZACZYK
##

SRC=		main.c \
		maini.c \
		movementi.c \
		print_tab.c \
		error.c \
		movement.c

OBJ=            $(SRC:.c=.o)

CFLAGS=         -Wall -Werror -Wextra

NAME=           generateur

all:            $(NAME)


$(NAME):	$(OBJ)
		gcc -o $(NAME) $(OBJ)

clean:
		rm -f $(OBJ)

fclean:		clean
		rm -f $(NAME)

re:		fclean all
