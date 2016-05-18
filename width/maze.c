/*
** maze.c for maze in /home/fossae_t/rendu/dante/width
**
** Made by Thomas Fossaert
** Login   <fossae_t@epitech.net>
**
** Started on  Tue May 17 16:28:34 2016 Thomas Fossaert
** Last update Tue May 17 16:39:51 2016 Thomas Fossaert
*/

#include	<stdio.h>
#include	<unistd.h>
#include	<stdlib.h>
#include	<sys/types.h>
#include	<sys/stat.h>
#include	<fcntl.h>
#include	"file.h"

int		remp_tab(char **map, int i, int j, char *str)
{
  int		x;
  int		y;
  int		fd;
  int		ret;
  char		buff;

  if ((fd = open(str, O_RDONLY)) == -1)
    return (print_str(2, "Couldn't open file.\n"));
  y = 0;
  while (y < j)
    {
      x = -1;
      while (++x < i)
	{
	  if ((ret = read(fd, &buff, 1)) == -1)
	    return (print_str(2, "Error while reading\n"));
	  map[y][x] = buff;
	}
      if ((ret = read(fd, &buff, 1)) == -1)
	return (print_str(2, "Error while reading.\n"));
      y++;
    }
  if (close(fd) == -1)
    return (print_str(2, "Couldn't close file.\n"));
  return (SUCCESS);
}

char		**create_map(int i, int j)
{
  int		x;
  char		**map;

  x = 0;
  if ((map = malloc(sizeof(char *) * (j + 1))) == NULL)
    return (p_error("Couldn't malloc.\n"));
  while (x != j)
    {
      if ((map[x] = malloc(sizeof(char) * i + 1)) == NULL)
	return (p_error("Couldn't malloc.\n"));
      map[x][i] = '\0';
      x++;
    }
  map[x] = NULL;
  return (map);
}

int		count_map(int fd, int *i, int *j)
{
  char		buff;
  int		ret;
  int		count;

  *i = 0;
  *j = 0;
  count = 0;
  while ((ret = read(fd, &buff, 1)) > 0)
    {
      if (buff == '\n' && *i == 0)
	{
	  *i = count;
	  *j += 1;;
	}
      else if (buff == '\n')
	*j += 1;
      count += 1;
    }
  if (ret == -1)
    print_str(2, "Error while reading.\n");
  return (SUCCESS);
}

char		**gen_tab(char *str)
{
  int		i;
  int		j;
  int		fd;
  char		**map;

  if ((fd = open(str, O_RDONLY)) == -1)
    return (p_error("Error while opening map.\n"));
  if (count_map(fd, &i, &j) == ERROR)
    return (NULL);
  if (close(fd) == -1)
    print_str(2, "Error while closing file.\n");
  if ((map = create_map(i, j)) == NULL)
    return (NULL);
  if (remp_tab(map, i, j, str) == ERROR)
    return (NULL);
  return (map);
}

int		print_str(int fd, char *str)
{
  write(1, str, my_strlen(str));
  if (fd == 2)
    return (ERROR);
  return (SUCCESS);
}
