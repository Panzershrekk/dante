##
## Makefile for generateur in /home/fossae_t/rendu/dante
## 
## Made by Thomas Fossaert
## Login   <fossae_t@epitech.net>
## 
## Started on  Fri May 20 16:05:29 2016 Thomas Fossaert
## Last update Sun May 22 22:52:42 2016 Thomas Fossaert
##

all:
		make -C profondeur/
		make -C largeur/
		make -C tournoi/

clean:
		make clean -C profondeur/
		make -C largeur/
		make -C tournoi/

fclean:
		make fclean -C profondeur/
		make -C largeur/
		make -C tournoi/

re:		fclean	all
