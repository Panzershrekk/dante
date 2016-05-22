/*
** error.c for error.c in /home/fossae_t/rendu/dante/generateur
**
** Made by Thomas Fossaert
** Login   <fossae_t@epitech.net>
**
** Started on  Sat May 21 14:46:31 2016 Thomas Fossaert
** Last update Sun May 22 22:42:49 2016 Thomas Fossaert
*/

#include		<stdlib.h>
#include		<stdio.h>

void		my_free_double_int(int **tab, int h)
{
  int		i;

  i = 0;
  while (i != h)
    {
      free(tab[i]);
      i++;
    }
  free(tab);
}

void		my_free_double_char(char **tab)
{
  int		i;

  i = 0;
  while (tab)
    {
      free(tab[i]);
      i++;
    }
  free(tab);
}

int			manage_error(int h, int w)
{
  if (h <= 0 || w <= 0)
    {
      fprintf(stderr, "Size must be positive\n");
      return (1);
    }
  if (h == 1 && w == 1)
    {
      fprintf(stderr, "Size too small for a maze\n");
      return (1);
    }
  return (0);
}
