/*
** find_path.c for path in /home/fossae_t/rendu/dante/depth
**
** Made by Thomas Fossaert
** Login   <fossae_t@epitech.net>
**
** Started on  Tue May 17 11:19:02 2016 Thomas Fossaert
** Last update Sun May 22 22:56:49 2016 Thomas Fossaert
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

int		find_y(int x, int y, t_data *data, char **maze)
{
  if (can_move(x, y + 1, maze, data) == 0)
    {
      y = y + 1;
      return (y);
    }
  else if (can_move(x, y - 1, maze, data) == 0)
    {
      y = y - 1;
      return (y);
    }
  return (-1);
}

int		find_x(int x, int y, t_data *data, char **maze)
{
  if (can_move(x + 1, y, maze, data) == 0)
    {
      x = x + 1;
      return (x);
    }
  else if (can_move(x - 1, y, maze, data) == 0)
    {
      x = x - 1;
      return (x);
    }
  return (-1);
}

int		find_path(int x, int y, t_data *data, char **maze)
{
  while (maze[data->y_max - 2][data->x_max - 1] != '0'
	 && maze[data->y_max - 1][data->x_max - 2] != '0')
    {
      maze[y][x] = '0';
      if (find_x(x, y, data, maze) != -1)
	x = find_x(x, y, data, maze);
      else if (find_y(x, y, data, maze) != -1)
	y = find_y(x, y, data, maze);
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
