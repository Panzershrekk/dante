/*
** main.c for main.c in /home/fossae_t/rendu/dante
**
** Made by Thomas Fossaert
** Login   <fossae_t@epitech.net>
**
** Started on  Mon May  9 09:37:57 2016 Thomas Fossaert
** Last update Mon May  9 11:15:38 2016 Thomas Fossaert
*/

#include	<stdio.h>
#include	<stdlib.h>
#include	"my.h"

char		**malloc_my_maze(char **maze, int height, int width)
{
  int		i;

  i = 0;
  maze = malloc(sizeof(char *) * height);
  while (i < height)
    {
      maze[i] = malloc(sizeof(char) * width);
      i++;
    }
  return (maze);
}

char		**create_maze(int height, int width, char **maze)
{
  int		i;
  int		j;

  i = 0;
  while (i < height)
    {
      j = 0;
      while (j < width)
	{
	  maze[i][j] = '1';
	  j++;
	}
      i++;
    }
  return (maze);
}

int		main(int ac, char **av)
{
  char		**maze;
  int		h;
  int		w;

  maze = NULL;
  if (ac != 3)
    return (0);
  else
    {
      h = atoi(av[1]);
      w = atoi(av[2]);
      maze = malloc_my_maze(maze, h, w);
      maze = create_maze(h, w, maze);
      print_my_tab_char(maze, h);
    }
  return (0);
}
