/*
** solve.c for solve in /home/fossae_t/rendu/dante/width
**
** Made by Thomas Fossaert
** Login   <fossae_t@epitech.net>
**
** Started on  Wed May 18 14:42:30 2016 Thomas Fossaert
** Last update Wed May 18 15:42:01 2016 Thomas Fossaert
*/

#include		<stdlib.h>
#include		"file.h"

int			**convert_tab(char **map, t_data *data)
{
  int			i;
  int			j;
  int			**map_int;

  i = 0;
  j = 0;
  map_int = malloc(sizeof(int *) * data->y_max + 1);
  while (j < data->y_max)
    {
      map_int[j] = malloc(sizeof(int) * data->x_max + 1);
      j++;
    }
  while (i < data->y_max)
    {
      j = 0;
      while (j < data->x_max)
	{
	  if (map[i][j] == 'X')
	    map_int[i][j] = 1;
	  else
	    map_int[i][j] = 0;
	  j++;
	}
      i++;
    }
  return (map_int);
}

void			time_to_solve(t_file *maFile, char **map, t_data *data)
{
  int			i;
  int			j;

  i = 0;
  j = 0;
  enfiler(maFile, map[i][j]);
  afficherFile(maFile);
}
