##
## Makefile for dnte in /home/fossae_t/rendu/dante/perfect
## 
## Made by Thomas Fossaert
## Login   <fossae_t@epitech.net>
## 
## Started on  Thu May 19 10:02:57 2016 Thomas Fossaert
## Last update Sat May 21 15:11:08 2016 Thomas Fossaert
##

SRC=		main.c \
		maini.c \
		movementi.c \
		print_tab.c \
		error.c \
		movement.c

OBJ=            $(SRC:.c=.o)

CFLAGS=         -Wall -Werror -Wextra -g

NAME=           generateur

all:            $(NAME)


$(NAME):	$(OBJ)
		gcc -o $(NAME) $(OBJ)

clean:
		rm -f $(OBJ)

fclean:		clean
		rm -f $(NAME)

re:		fclean all
