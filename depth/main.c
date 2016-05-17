/*
** main.c for main.c in /home/fossae_t/rendu/dante/depth
**
** Made by Thomas Fossaert
** Login   <fossae_t@epitech.net>
**
** Started on  Tue May 17 10:21:45 2016 Thomas Fossaert
** Last update Tue May 17 12:58:02 2016 Thomas Fossaert
*/

#include	<stdlib.h>
#include	<stdio.h>
#include	<unistd.h>
#include	"maze.h"

void		print_maze(char **map)
{
  int		i;

  i = 0;
  while (map[i])
    {
      printf("%s\n", map[i]);
      i++;
    }
}

int		my_strlen(char *str)
{
  int		i;

  i = 0;
  while (str[i])
    i++;
  return (i);
}

void		*p_error(char *str)
{
  print_str(2, str);
  return (NULL);
}

int			init_struct(t_data *data, char **map)
{
  int			i;
  int			j;

  i = 0;
  j = 0;
  while (map[i])
    {
      while (map[i][j])
	j++;
      i++;
    }
  data->y_max = i;
  data->x_max = j;
}

int			main(int ac, char **av)
{
  char			**map;
  t_data		data;

  if (ac != 2)
    return (0);
  else
    {
      map = gen_tab(av[1]);
      init_struct(&data, map);
      map[0][0] = 'S';
      map[data.y_max -1][data.x_max -1] = 'G';
      print_maze(map);
    /*find_path(0, 0);*/
    }
}
