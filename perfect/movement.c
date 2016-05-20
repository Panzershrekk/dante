/*
** movement.c for movement in /home/fossae_t/rendu/dante/perfect
**
** Made by Thomas Fossaert
** Login   <fossae_t@epitech.net>
**
** Started on  Thu May 12 11:11:55 2016 Thomas Fossaert
** Last update Fri May 20 12:37:34 2016 Thomas Fossaert
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

int		go_up(int **maze, int h, int w, int *valor)
{
  if (h - 2 >= 0)
    {
      if (maze[h - 2][w] != 2)
	{
	  maze[h - 2][w] = 2;
	  maze[h - 1][w] = 2;
	  h = h - 2;
	}
    }
  return (h);
}

int		go_right(int **maze, int h, int w, int *valor)
{
  if (h - 2 >= 0)
    {
      if (maze[h - 2][w] != 2)
	{
	  maze[h - 2][w] = 2;
	  maze[h - 1][w] = 2;
	  h = h - 2;
	}
    }
  return (h);
}

int		go_down(int **maze, int h, int w, int *valor)
{
  if (w - 2 >= 0)
    {
      if (maze[h - 2][w] != 2)
	{
	  maze[h - 2][w] = 2;
	  maze[h - 1][w] = 2;
	  h = h - 2;
	}
    }
  return (h);
}


int		go_left(int **maze, int h, int w, int *valor)
{
  if (h - 2 >= 0)
    {
      if (maze[h - 2][w] != 2)
	{
	  maze[h - 2][w] = 2;
	  maze[h - 1][w] = 2;
	  h = h - 2;
	}
    }
  return (w);
}
