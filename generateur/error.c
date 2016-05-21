/*
** error.c for error.c in /home/fossae_t/rendu/dante/generateur
**
** Made by Thomas Fossaert
** Login   <fossae_t@epitech.net>
**
** Started on  Sat May 21 14:46:31 2016 Thomas Fossaert
** Last update Sat May 21 15:00:40 2016 Thomas Fossaert
*/

#include		<stdlib.h>
#include		<stdio.h>

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
