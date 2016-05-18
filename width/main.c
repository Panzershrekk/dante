/*
** main.c for main in /home/fossae_t/rendu/dante/width
**
** Made by Thomas Fossaert
** Login   <fossae_t@epitech.net>
**
** Started on  Tue May 17 16:16:28 2016 Thomas Fossaert
** Last update Wed May 18 15:41:17 2016 Thomas Fossaert
*/

#include	<stdio.h>
#include	<stdlib.h>
#include	"file.h"

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
	  if (map[i][j] == '0' || map[i][j] == 'E')
	    map[i][j] = 'o';
	  else if (map[i][j] == '1')
	    map[i][j] = '.';
	  printf("%c", map[i][j]);
	  j++;
	}
      printf("\n");
      j = 0;
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

int		main(int ac, char **av)
{
    t_file	*maFile = initialiser();
    char	**map;
    int		i;
    int		j;
    t_data	data;
    int		**map_int;

    map = gen_tab(av[1]);
    /*printf("\nEtat de la file :\n");*/
    /*afficherFile(maFile);*/
    i = 0;
    j = 0;
    while (map[i])
      {
	while (map[i][j])
	  j++;
	i++;
      }
    data.x_max = j;
    data.y_max = i;
    map_int = convert_tab(map, &data);
    time_to_solve(maFile, map_int, &data);
    return (0);
}
