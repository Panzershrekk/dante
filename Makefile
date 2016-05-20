##
## Makefile for generateur in /home/fossae_t/rendu/dante
## 
## Made by Thomas Fossaert
## Login   <fossae_t@epitech.net>
## 
## Started on  Fri May 20 16:05:29 2016 Thomas Fossaert
## Last update Fri May 20 16:06:36 2016 Thomas Fossaert
##

all:
		make -C profondeur/

clean:
		make clean -C profondeur/


fclean:
		make fclean -C profondeur/

re:		fclean	all
