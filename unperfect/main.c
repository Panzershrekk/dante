/*
** main.c for main.c in /home/fossae_t/rendu/dante/perfect
**
** Made by Thomas Fossaert
** Login   <fossae_t@epitech.net>
**
** Started on  Thu May 12 10:00:37 2016 Thomas Fossaert
** Last update Thu May 19 10:41:45 2016 Thomas Fossaert
*/

#include	<alloca.h>
#include	<stdlib.h>
#include	"my.h"

void		my_finish_tab(int **maze, int h, int w, int *valor)
{
  if (h == valor[0] - 2 && w == valor[1] - 2)
    maze[valor[0] -1][valor[1] - 2] = 2;
  else if (h == valor[0] - 1 && w == valor[1] - 3)
    maze[valor[0] -1][valor[1] - 2] = 2;
  else if (h == valor[0] - 3 && w == valor[1] - 1)
    maze[valor[0] -2][valor[1] - 1] = 2;
}

int		**gen_maze(int **maze, int h, int w, int *valor)
{
  int		rand;

  rand = 0;
  if ((h == valor[0] - 2 && w == valor[1] - 2) ||
      (h == valor[0] - 1 && w == valor[1] - 3) ||
      (h == valor[0] - 3 && w == valor[1] - 1))
    {
      my_finish_tab(maze, h, w, valor);
      convert_tab(maze, valor[0], valor[1]);
      exit(0);
    }
  else
    {
      rand = my_rand(1, 5);
      if (rand == 1)
	go_up(maze, h, w, valor);
      else if (rand == 2)
	go_right(maze, h, w, valor);
      else if (rand == 3)
	go_down(maze, h, w, valor);
      else if (rand == 4)
	go_left(maze, h, w, valor);
    }
}

int		**create_maze(int **maze, int h, int w)
{
  int		i;
  int		j;

  i = 0;
  while (i < h)
    {
      j = 0;
      while (j < w)
	{
	  maze[i][j] = 1;
	  j++;
	}
      i++;
    }
  maze[0][0] = 2;
  maze[h - 1][w - 1] = 0;
  return (maze);
}

int		**malloc_maze(int **maze, int h, int w)
{
  int		i;

  i = 0;
  maze = malloc(sizeof(int *) * h);
  while (i < h)
    {
      maze[i] = malloc(sizeof(int) * w);
      i++;
    }
  return (maze);
}

int		main(int ac, char **av)
{
  int		**maze;
  int		valor[2];

  maze = NULL;
  if (ac != 3)
    return (0);
  else
    {
      valor[0] = atoi(av[2]);
      valor[1] = atoi(av[1]);
      maze = malloc_maze(maze, valor[0], valor[1]);
      maze = create_maze(maze, valor[0], valor[1]);
      gen_maze(maze, 0, 0, valor);
    }
}
