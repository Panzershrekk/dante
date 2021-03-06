/*
** movement.c for movement in /home/fossae_t/rendu/dante/perfect
**
** Made by Thomas Fossaert
** Login   <fossae_t@epitech.net>
**
** Started on  Thu May 12 11:11:55 2016 Thomas Fossaert
** Last update Sun May 22 22:29:02 2016 Thomas Fossaert
*/

#include	<stdlib.h>
#include	<stdio.h>
#include	<time.h>
#include	"my.h"

int		my_rand(int min, int max)
{
  static int	f = 1;

  if (f == 1)
    {
      srand(time(NULL));
      f = 0;
    }
  return (rand() % (max - min) + min);
}

int		go_up(int **maz, int h, int w, int *valor)
{
  if (h - 2 >= 0)
    {
      if (maz[h - 2][w] != 2 && maz[h - 2][w] != 3)
	{
	  maz[h - 2][w] = 2;
	  maz[h - 1][w] = 2;
	  h = h - 2;
	}
      else if (h + 2 <= valor[0] - 1)
	{
	  if (maz[h + 2][w] == 2 && maz[h + 1][w] == 2 && maz[h + 2][w] != 3)
	    {
	      maz[h][w] = 3;
	      maz[h + 1][w] = 3;
	      h = h + 2;
	    }
	}
    }
  return (h);
}

int		go_right(int **maz, int h, int w, int *valor)
{
  if (w + 2 <= valor[1] - 1)
    {
      if (maz[h][w + 2] != 2 && maz[h][w + 2] != 3)
	{
	  maz[h][w + 2] = 2;
	  maz[h][w + 1] = 2;
	  w = w + 2;
	}
      else if (w - 2 >= 0)
	{
	  if (maz[h][w - 2] == 2 && maz[h][w - 1] == 2 && maz[h][w - 2] != 3)
	    {
	      maz[h][w] = 3;
	      maz[h][w - 1] = 3;
	      w = w - 2;
	    }
	}
    }
  return (w);
}

int		go_down(int **maz, int h, int w, int *valor)
{
  if (h + 2 <= valor[0] - 1)
    {
      if (maz[h + 2][w] != 2 && maz[h + 2][w] != 3)
	{
	  maz[h + 2][w] = 2;
	  maz[h + 1][w] = 2;
	  h = h + 2;
	}
      else if (h - 2 >= 0)
	{
	  if (maz[h - 2][w] == 2 && maz[h - 1][w] == 2 && maz[h - 2][w] != 3)
	    {
	      maz[h][w] = 3;
	      maz[h - 1][w] = 3;
	      h = h - 2;
	    }
	}
    }
  return (h);
}

int		go_left(int **maz, int h, int w, int *valor)
{
  if (w - 2 >= 0)
    {
      if (maz[h][w - 2] != 2 && maz[h][w - 2] != 3)
	{
	  maz[h][w - 2] = 2;
	  maz[h][w - 1] = 2;
	  w = w - 2;
	}
      else if (w + 2 <= valor[1] - 1)
	{
	  if (maz[h][w + 2] == 2 && maz[h][w + 1] == 2 && maz[h][w + 2] != 3)
	    {
	      maz[h][w] = 3;
	      maz[h][w + 1] = 3;
	      w = w + 2;
	    }
	}
    }
  return (w);
}
