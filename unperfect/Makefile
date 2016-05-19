##
## Makefile for dnte in /home/fossae_t/rendu/dante/perfect
## 
## Made by Thomas Fossaert
## Login   <fossae_t@epitech.net>
## 
## Started on  Thu May 19 10:02:57 2016 Thomas Fossaert
## Last update Thu May 19 10:02:59 2016 Thomas Fossaert
##

SRC=		main.c \
		print_tab.c \
		movement.c

OBJ=            $(SRC:.c=.o)

CFLAGS=		-g

NAME=           maze

all:            $(NAME)


$(NAME):	$(OBJ)
		gcc -o $(NAME) $(OBJ)

clean:
		rm -f $(OBJ)

fclean:		clean
		rm -f $(NAME)

re:		fclean all
