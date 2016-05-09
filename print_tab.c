/*
** print_tab.c for print_tab in /home/fossae_t/rendu/dante
**
** Made by Thomas Fossaert
** Login   <fossae_t@epitech.net>
**
** Started on  Mon May  9 10:54:21 2016 Thomas Fossaert
** Last update Mon May  9 11:13:30 2016 Thomas Fossaert
*/

#include	<stdio.h>
#include	<stdlib.h>
#include	"my.h"

void		print_my_tab_char(char **tab, int h)
{
  int		i;

  i = 0;
  while (i < h)
    {
      printf("%s\n", tab[i]);
      i++;
    }
}
