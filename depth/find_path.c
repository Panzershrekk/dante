/*
** find_path.c for path in /home/fossae_t/rendu/dante/depth
**
** Made by Thomas Fossaert
** Login   <fossae_t@epitech.net>
**
** Started on  Tue May 17 11:19:02 2016 Thomas Fossaert
** Last update Tue May 17 12:56:15 2016 Thomas Fossaert
*/

#include	"maze.h"

int		find_path(int x, int y)
{
  if (x < 0 || x > data->x_max -1  || y < 0 || y > data->y_max -1)
    return (1);
  if (map[y][x] == '2')
    return (0);
  if ( maze[y][x] != '.' && maze[y][x] != 'S' )
    return (1);
  maze[y][x] = '+';
  if (find_path(x, y - 1) == 0)
    return (0);
  if (find_path(x + 1, y) == 0)
    return (0);
  if (find_path(x, y + 1) == 0)
    return (0);
  if (find_path(x - 1, y) == 0)
    return (0);
  maze[y][x] = 'x';
  return (1);
}
