/*
** main.c for main.c in /home/fossae_t/rendu/dante/depth
**
** Made by Thomas Fossaert
** Login   <fossae_t@epitech.net>
**
** Started on  Tue May 17 10:21:45 2016 Thomas Fossaert
** Last update Fri May 20 16:27:15 2016 Antoine ZACZYK
*/

#include	<stdlib.h>
#include	<stdio.h>
#include	<unistd.h>
#include	"maze.h"

void		print_maze(char **map)
{
  int		i;
  int		j;

  i = 0;
  j = 0;
  while (map[i])
    {
      while (map[i][j])
	{
	  /* if (map[i][j] == '0' || map[i][j] == 'E' || map[i][j] == 'S') */
	  /*   map[i][j] = 'o'; */
	  /* else if (map[i][j] == '1') */
	  /*   map[i][j] = '*'; */
	  printf("%c", map[i][j]);
	  j++;
	}
      printf("\n");
      j = 0;
      i++;
    }
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
      map[data.y_max - 1][data.x_max -1] = 'E';
      if (find_path(0, 0, &data, map) == 0)
	print_maze(map);
      else
	printf("No soluce\n");
      free_my_tab(map);
    }
  return (0);
}
