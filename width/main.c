/*
** main.c for main in /home/fossae_t/rendu/dante/width
**
** Made by Thomas Fossaert
** Login   <fossae_t@epitech.net>
**
** Started on  Tue May 17 16:16:28 2016 Thomas Fossaert
** Last update Wed May 18 14:04:21 2016 Thomas Fossaert
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
    File	*maFile = initialiser();
    char	**map;

    map = gen_tab(av[1]);
    enfiler(maFile, 4);
    /*printf("\nEtat de la file :\n");*/
    /*afficherFile(maFile);*/
    time_to_solve(maFile, map);
    return (0);
}
