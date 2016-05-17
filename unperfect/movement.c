/*
** movement.c for movement in /home/fossae_t/rendu/dante
**
** Made by Thomas Fossaert
** Login   <fossae_t@epitech.net>
**
** Started on  Mon May  9 11:24:27 2016 Thomas Fossaert
** Last update Tue May 10 16:18:19 2016 Thomas Fossaert
*/

#include	<stdlib.h>
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

void		go_up(int **maze, int h, int w, int *valor)
{
  if (h - 1 <= 0)
    gen_maze(maze, h, w, valor);
  if (maze[h - 1][w] != 0)
    {
      maze[h - 1][w] = 0;
      gen_maze(maze, h - 1, w, valor);
    }
  gen_maze(maze, h, w, valor);
}

void		go_right(int **maze, int h, int w, int *valor)
{
  if (w + 1 >= valor[1])
    gen_maze(maze, h, w, valor);
  if (maze[h][w + 1] != 0)
    {
      maze[h][w + 1] = 0;
      gen_maze(maze, h, w + 1, valor);
    }
  gen_maze(maze, h, w, valor);
}

void		go_down(int **maze, int h, int w, int *valor)
{
  if (h + 1 >= valor[0])
    gen_maze(maze, h, w, valor);
  if (maze[h + 1][w] != 0)
    {
      maze[h + 1][w] = 0;
      gen_maze(maze, h + 1, w, valor);
    }
  gen_maze(maze, h, w, valor);
}

void		go_left(int **maze, int h, int w, int *valor)
{
  if (w - 1 <= 0)
    gen_maze(maze, h, w, valor);
  if (maze[h][w - 1] != 0)
    {
      maze[h][w - 1] = 0;
      gen_maze(maze, h, w - 2, valor);
    }
  gen_maze(maze, h, w, valor);
}