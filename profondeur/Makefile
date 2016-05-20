##
## Makefile for makefile in /home/fossae_t/rendu/PSU_2015_minishell2
## 
## Made by Thomas Fossaert
## Login   <fossae_t@epitech.net>
## 
## Started on  Fri Apr  1 11:23:47 2016 Thomas Fossaert
## Last update Fri May 20 16:33:10 2016 Antoine ZACZYK
##

SRC=		main.c		\
		remp_tab.c	\
		find_path.c	\
		tools.c

OBJ=            $(SRC:.c=.o)

CFLAGS=		-g

NAME=           solver

all:            $(NAME)


$(NAME):	$(OBJ)
		gcc -o $(NAME) $(OBJ)

clean:
		rm -f $(OBJ)

fclean:		clean
		rm -f $(NAME)

re:		fclean all
