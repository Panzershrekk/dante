/*
** movement.c for movement in /home/fossae_t/rendu/dante
**
** Made by Thomas Fossaert
** Login   <fossae_t@epitech.net>
**
** Started on  Mon May  9 11:24:27 2016 Thomas Fossaert
** Last update Mon May  9 14:48:58 2016 Thomas Fossaert
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

void		go_up(char **maze, int h, int w, int *valor)
{
  if (h - 2 <= 0)
    gen_maze(maze, h, w, valor);
  if (maze[h - 2][w] != '*')
    {
      maze[h - 2][w] = '*';
      maze[h - 1][w] = '*';
      gen_maze(maze, h - 2, w, valor);
    }
}

void		go_right(char **maze, int h, int w, int *valor)
{
  if (w + 2 >= valor[1] - 1)
    gen_maze(maze, h, w, valor);
  if (maze[h][w + 2] != '*')
    {
      maze[h][w + 2] = '*';
      maze[h][w + 1] = '*';
      gen_maze(maze, h, w + 2, valor);
    }
  else
    gen_maze(maze, h, w, valor);
}

void		go_down(char **maze, int h, int w, int *valor)
{
  if (h + 2 >= valor[0] - 1)
    gen_maze(maze, h, w, valor);
  if (maze[h + 2][w] != '*')
    {
      maze[h + 2][w] = '*';
      maze[h + 1][w] = '*';
      gen_maze(maze, h + 2, w, valor);
    }
}

void		go_left(char **maze, int h, int w, int *valor)
{
  if (w - 2 <= 0)
    gen_maze(maze, h, w, valor);
  if (maze[h][w - 2] != '*')
    {
      maze[h][w - 2] = '*';
      maze[h][w - 1] = '*';
      gen_maze(maze, h, w - 2, valor);
    }
}
