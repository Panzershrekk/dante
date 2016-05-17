/*
** find_path.c for path in /home/fossae_t/rendu/dante/depth
**
** Made by Thomas Fossaert
** Login   <fossae_t@epitech.net>
**
** Started on  Tue May 17 11:19:02 2016 Thomas Fossaert
** Last update Tue May 17 13:46:14 2016 Thomas Fossaert
*/

#include	"maze.h"

int		find_path(int x, int y, t_data *data, char **maze)
{
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
}
