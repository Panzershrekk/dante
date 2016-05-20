/*
** maze.h for maze in /home/fossae_t/rendu/dante/depth
**
** Made by Thomas Fossaert
** Login   <fossae_t@epitech.net>
**
** Started on  Tue May 17 10:35:43 2016 Thomas Fossaert
** Last update Fri May 20 16:34:20 2016 Antoine ZACZYK
*/

#ifndef	        MAZE_H_

# define	MAZE_H

#ifndef		ERROR_

# define	ERROR (1)

#endif		/* !MAZE_H_ */

#ifndef		SUCCESS_

# define	SUCCESS (0)

#endif		/* !SUCCESS_ */

typedef struct	s_data
{
  int		x_max;
  int		y_max;
  int		x_cross;
  int		y_cross;
}		t_data;

char		**gen_tab(char *str);
void		*p_error(char *str);
void		free_my_tab(char **str);
int		my_strlen(char *str);
int		print_str(int i, char *str);
int		my_strlen(char *str);
int		find_path(int x, int y, t_data *data, char **map);

#endif		/* !MAZE_H_ */
