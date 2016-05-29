##
## Makefile for generateur in /home/fossae_t/rendu/dante
## 
## Made by Thomas Fossaert
## Login   <fossae_t@epitech.net>
## 
## Started on  Fri May 20 16:05:29 2016 Thomas Fossaert
## Last update Mon May 30 01:31:39 2016 Antoine ZACZYK
##

all:
		make -C profondeur/
		make -C largeur/
		make -C tournoi/

clean:
		make clean -C profondeur/
		make clean -C largeur/
		make clean -C tournoi/

fclean:
		make fclean -C profondeur/
		make fclean -C largeur/
		make fclean -C tournoi/

re:		fclean	all
