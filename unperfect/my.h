/*
** my.h for my.h in /home/fossae_t/rendu/PSU_2015_minishell2/src
**
** Made by Thomas Fossaert
** Login   <fossae_t@epitech.net>
**
** Started on  Fri Apr  1 11:41:59 2016 Thomas Fossaert
** Last update Thu May 19 10:45:27 2016 Thomas Fossaert
*/

#ifndef		_MY_H_
# define	_MY_H_

void		print_my_tab_char(char **tab, int h);
void		go_up(int **maze, int h, int w, int *valor);
void		go_down(int **maze, int h, int w, int *valor);
void		go_right(int **maze, int h, int w, int *valor);
void		go_left(int **maze, int h, int w, int *valor);
int		**gen_maze(int **maze, int h, int w, int *valor);
int		my_rand(int min, int max);
void		convert_tab(int **maze, int h, int w);

#endif		/* _MY_H_ */
