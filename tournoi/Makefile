##
## Makefile for makefile in /home/fossae_t/rendu/PSU_2015_minishell2
## 
## Made by Thomas Fossaert
## Login   <fossae_t@epitech.net>
## 
## Started on  Fri Apr  1 11:23:47 2016 Thomas Fossaert
## Last update Sun May 22 22:02:54 2016 Thomas Fossaert
##

SRC=		main.c		\
		remp_tab.c	\
		find_path.c	\
		tools.c

OBJ=            $(SRC:.c=.o)

CFLAGS=		-Wall -Werror -Wextra -g

NAME=           solver

all:            $(NAME)


$(NAME):	$(OBJ)
		gcc -o $(NAME) $(OBJ)

clean:
		rm -f $(OBJ)

fclean:		clean
		rm -f $(NAME)

re:		fclean all
