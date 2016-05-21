/*
** main.c for main.c in /home/fossae_t/rendu/dante/perfect
**
** Made by Thomas Fossaert
** Login   <fossae_t@epitech.net>
**
** Started on  Thu May 12 10:00:37 2016 Thomas Fossaert
** Last update Sat May 21 15:14:58 2016 Thomas Fossaert
*/

#include	<alloca.h>
#include	<stdlib.h>
#include	"myi.h"

void		my_finish_tab_i(int **maze, int h, int w, int *valor)
{
  if (h == valor[0] - 2 && w == valor[1] - 2)
    maze[valor[0] -1][valor[1] - 2] = 2;
  else if (h == valor[0] - 1 && w == valor[1] - 3)
    maze[valor[0] -1][valor[1] - 2] = 2;
  else if (h == valor[0] - 3 && w == valor[1] - 1)
    maze[valor[0] -2][valor[1] - 1] = 2;
}

void		gen_maze_i(int **maze, int h, int w, int *valor)
{
  int		rand;

  rand = 0;
  while (maze[valor[0]-2][valor[1]-1] != 2
	 && maze[valor[0]-2][valor[1]-2] != 2
	 && maze[valor[0]-1][valor[1]-2] != 2
	 && maze[valor[0]-3][valor[1]-1] != 2
	 && maze[valor[0]-1][valor[1]-3] != 2)
    {
      rand = my_rand(1, 5);
      if (rand == 1)
	h = go_up_i(maze, h, w);
      else if (rand == 2)
	w = go_right_i(maze, h, w, valor);
      else if (rand == 3)
	h = go_down_i(maze, h, w, valor);
      else if (rand == 4)
	w = go_left_i(maze, h, w);
    }
  my_finish_tab_i(maze, h, w, valor);
  convert_tab(maze, valor[0], valor[1]);
}
