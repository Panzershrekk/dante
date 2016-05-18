##
## Makefile for makefile in /home/fossae_t/rendu/PSU_2015_minishell2
## 
## Made by Thomas Fossaert
## Login   <fossae_t@epitech.net>
## 
## Started on  Fri Apr  1 11:23:47 2016 Thomas Fossaert
## Last update Wed May 18 15:22:47 2016 Thomas Fossaert
##

SRC=		main.c \
		file.c \
		solve.c \
		maze.c

OBJ=            $(SRC:.c=.o)

##CFLAGS=		-W -Wall -Wextra -ansi -pedantic -g

NAME=           solver

all:            $(NAME)


$(NAME):	$(OBJ)
		gcc -o $(NAME) $(OBJ)

clean:
		rm -f $(OBJ)

fclean:		clean
		rm -f $(NAME)

re:		fclean all
