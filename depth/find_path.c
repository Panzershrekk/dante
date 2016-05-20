/*
** find_path.c for path in /home/fossae_t/rendu/dante/depth
**
** Made by Thomas Fossaert
** Login   <fossae_t@epitech.net>
**
** Started on  Tue May 17 11:19:02 2016 Thomas Fossaert
** Last update Fri May 20 16:41:49 2016 Antoine ZACZYK
*/

#include	<stdio.h>
#include	<unistd.h>
#include	"maze.h"

int		can_move(int x, int y, char **maze, t_data *data)
{
  if (x < 0 || x > data->x_max -1  || y < 0 || y > data->y_max -1)
    return (1);
  if (maze[y][x] != '*' && maze[y][x] != 'S')
    return (1);
  return (0);
}

int		four_way(int x, int y, char **maze, t_data *data)
{
  int		cpt;

  cpt = 0;
  if (y > 0 && maze[y - 1][x] == '*')
    cpt++;
  else if (y < data->y_max - 1 && maze[y + 1][x] == '*')
    cpt++;
  else if (maze[y][x + 1] != 0 && maze[y][x + 1] == '*')
    cpt++;
  else if (x > 0 && maze[y][x - 1] == '*')
    cpt++;
  return (cpt);
}

int             find_path(int x, int y, t_data *data, char **maze)
{
  while (maze[data->y_max - 2][data->x_max - 1] != '0'
	 && maze[data->y_max - 1][data->x_max - 2] != '0')
    {
      if (can_move(x, y + 1, maze, data) == 0)
	y = y + 1;
      else if (can_move(x + 1, y, maze, data) == 0)
	x = x + 1;
      else if (can_move(x, y - 1, maze, data) == 0)
	y = y - 1;
      else if (can_move(x - 1, y, maze, data) == 0)
	x = x - 1;
      else if (four_way(x, y, maze, data) == 0)
	{
	  while (four_way(x, y, maze, data) < 1)
	    {
	      maze[y][x] = '1';
	      if (y < data->y_max - 1 && maze[y + 1][x] == '0')
		y++;
	      else if (x < data->x_max - 1 && maze[y][x + 1] == '0')
		x++;
	      else if (y > 0 && maze[y - 1][x] == '0')
		y--;
	      else if (x > 0 && maze[y][x - 1] == '0')
		x--;
	    }
	}
    }
  return (0);
}
