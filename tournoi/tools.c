/*
** tools.c for tools in /home/zaczyk_a/rendu/dante/depth
**
** Made by Antoine ZACZYK
** Login   <zaczyk_a@epitech.net>
**
** Started on  Fri May 20 16:25:48 2016 Antoine ZACZYK
** Last update Fri May 20 16:33:50 2016 Antoine ZACZYK
*/

#include	<stdlib.h>
#include	"maze.h"

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

void		free_my_tab(char **str)
{
  int		i;

  i = 0;
  if (str)
    {
      while (str[i])
	{
	  free(str[i]);
	  i++;
	}
      free(str);
    }
}
