/*
** my.h for my.h in /home/fossae_t/rendu/PSU_2015_minishell2/src
**
** Made by Thomas Fossaert
** Login   <fossae_t@epitech.net>
**
** Started on  Fri Apr  1 11:41:59 2016 Thomas Fossaert
** Last update Sat May 21 15:15:23 2016 Thomas Fossaert
*/

#ifndef		_MYI_H_
# define	_MYI_H_

void		print_my_tab_char(char **tab, int h);
int		go_up_i(int **maze, int h, int w);
int		go_down_i(int **maze, int h, int w, int *valor);
int		go_right_i(int **maze, int h, int w, int *valor);
int		go_left_i(int **maze, int h, int w);
void		gen_maze_i(int **maze, int h, int w, int *valor);
int		my_rand(int min, int max);
void		convert_tab(int **maze, int h, int w);
void		my_finish_tab(int **maze, int h, int w, int *valor);

#endif		/* _MYI_H_ */
