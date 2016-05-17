##
## Makefile for makefile in /home/fossae_t/rendu/dante/perfect
## 
## Made by Thomas Fossaert
## Login   <fossae_t@epitech.net>
## 
## Started on  Thu May 12 14:40:00 2016 Thomas Fossaert
## Last update Thu May 12 14:40:01 2016 Thomas Fossaert
##

NAME		=		maze

SRC		=		main.c \
				print_tab.c \
				movement.c \

OBJ		=		$(src:.c=.o)

RM		=		rm -f

CC		=		cc -o

all:		$(NAME)

$(NAME):	$(OBJ)
		$(CC) $(NAME) $(SRC) $(FLAG)

clean:
		$(RM) $(OBJ)

fclean:		clean
		$(RM) $(NAME)

re:		fclean all
