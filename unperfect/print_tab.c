/*
** print_tab.c for print in /home/fossae_t/rendu/dante/perfect
**
** Made by Thomas Fossaert
** Login   <fossae_t@epitech.net>
**
** Started on  Thu May 12 10:27:59 2016 Thomas Fossaert
** Last update Thu May 19 10:53:02 2016 Thomas Fossaert
*/

#include	<stdio.h>
#include	<stdlib.h>
#include	"my.h"

void		convert_tab(int **maze, int h, int w)
{
  int		i;
  int		j;
  char		**tab;

  i = 0;
  tab = malloc(sizeof(char *) * h);
  while (i < h)
    {
      tab[i] = malloc(sizeof(char) * w);
      i++;
    }
  i = 0;
  while (i < h)
    {
      j = 0;
      while (j < w)
	{
	  if (maze[i][j] == 1)
	    tab[i][j] = 'X';
	  else
	    tab[i][j] = '*';
	  j++;
	}
      i++;
    }
  print_my_tab_char(tab, h);
}

void		print_my_tab_char(char **tab, int h)
{
  int		i;

  i = 0;
  while (i < h)
    {
      printf("%s", tab[i]);
      i++;
      if (i < h)
	printf("\n");
    }
}


void		print_my_tab_int(int **tab, int h, int w)
{
  int		i;
  int		j;

  i = 0;
  while (i < h)
    {
      j = 0;
      while (j < w)
	{
	  printf("%d", tab[i][j]);
	  j++;
	}
      i++;
      if (i < h -1)
	printf("\n");
    }
}
