##
## Makefile for maze in /home/fossae_t/rendu/dante
## 
## Made by Thomas Fossaert
## Login   <fossae_t@epitech.net>
## 
## Started on  Mon May  9 09:37:32 2016 Thomas Fossaert
## Last update Mon May  9 11:24:16 2016 Thomas Fossaert
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
