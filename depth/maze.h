/*
** maze.h for maze in /home/fossae_t/rendu/dante/depth
**
** Made by Thomas Fossaert
** Login   <fossae_t@epitech.net>
**
** Started on  Tue May 17 10:35:43 2016 Thomas Fossaert
** Last update Tue May 17 11:31:08 2016 Thomas Fossaert
*/

#ifndef MAZE
# define MAZE

# ifndef ERROR
#  define ERROR (1)
# endif

# ifndef SUCCESS
#  define SUCCESS (0)
# endif

typedef struct	s_data
{
  int		x_max;
  int		y_max;
}		t_data;

char		**gen_tab(char *str);
void		*p_error(char *str);
int		print_str(int i, char *str);
int		my_strlen(char *str);

#endif
