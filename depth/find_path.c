/*
** find_path.c for path in /home/fossae_t/rendu/dante/depth
**
** Made by Thomas Fossaert
** Login   <fossae_t@epitech.net>
**
** Started on  Tue May 17 11:19:02 2016 Thomas Fossaert
** Last update Fri May 20 12:17:27 2016 Thomas Fossaert
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
  if (maze[y][x] == 'B')
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
      if (can_move(x, y - 1, maze, data) == 0)
	y = y - 1;
      else if (can_move(x + 1, y, maze, data) == 0)
	x = x + 1;
      else if (can_move(x, y + 1, maze, data) == 0)
	y = y + 1;
      else if (can_move(x - 1, y, maze, data) == 0)
	x = x - 1;
      else if (four_way(x, y, maze, data) == 0)
	{
	  while (four_way(x, y, maze, data) < 1)
	    {
	      maze[y][x] = '1';
	      if (y > 0 && maze[y - 1][x] == '0')
		y--;
	      else if (y < data->y_max - 1 && maze[y + 1][x] == '0')
		y++;
	      else if (x < data->x_max - 1 && maze[y][x + 1] == '0')
		x++;
	      else if (x > 0 && maze[y][x - 1] == '0')
		x--;
	      /* print_maze(maze);
	      printf("\n\n");
	      sleep(1);*/
	    }
	}
      /*print_maze(maze);
      printf("\n\n");
      sleep(1);*/
      maze[y][x] = '0';
    }
  return (0);
}

/*int		find_path(int x, int y, t_data *data, char **maze)
{
  printf("\n");
  print_maze(maze);
  if (x < 0 || x > data->x_max -1  || y < 0 || y > data->y_max -1)
    return (1);
  if (maze[y][x] == 'E')
    return (0);
  if (maze[y][x] != '.' && maze[y][x] != 'S')
    return (1);
  maze[y][x] = '0';
  if (find_path(x, y - 1, data, maze) == 0)
    return (0);
  if (find_path(x + 1, y, data, maze) == 0)
    return (0);
  if (find_path(x, y + 1, data, maze) == 0)
    return (0);
  if (find_path(x - 1, y, data, maze) == 0)
    return (0);
  maze[y][x] = '1';
  return (1);
  }*/
