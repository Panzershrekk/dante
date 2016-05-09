/*
** main.c for main.c in /home/fossae_t/rendu/dante
**
** Made by Thomas Fossaert
** Login   <fossae_t@epitech.net>
**
** Started on  Mon May  9 09:37:57 2016 Thomas Fossaert
** Last update Mon May  9 15:49:30 2016 Thomas Fossaert
*/

#include	<stdio.h>
#include	<stdlib.h>
#include	"my.h"

int		**malloc_my_maze(int **maze, int height, int width)
{
  int		i;

  i = 0;
  maze = malloc(sizeof(int *) * height);
  while (i < height)
    {
      maze[i] = malloc(sizeof(int) * width);
      i++;
    }
  return (maze);
}

int		**create_maze(int height, int width, int **maze)
{
  int		i;
  int		j;

  i = 0;
  while (i < height)
    {
      j = 0;
      while (j < width)
	{
	  maze[i][j] = 1;
	  j++;
	}
      i++;
    }
  maze[0][0] = 0;
  maze[height - 1][width - 1] = 0;
  return (maze);
}

int		**gen_maze(int **maze, int h, int w, int *valor)
{
  int		rand;

  convert_tab(maze, valor[0], valor[1]);
  if (h == valor[0] - 1 && w == valor[1] - 1)
    {
      printf("%s", "c'est gagné");
      return (maze);
    }
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

int		main(int ac, char **av)
{
  int		**maze;
  int		valor[2];
  int		h;
  int		w;

  maze = NULL;
  if (ac != 3)
    return (0);
  else
    {
      h = atoi(av[2]);
      w = atoi(av[1]);
      valor[0] = h;
      valor[1] = w;
      maze = malloc_my_maze(maze, h, w);
      maze = create_maze(h, w, maze);
      maze = gen_maze(maze, 0, 0, valor);
      convert_tab(maze, h, w);
    }
  return (0);
}
