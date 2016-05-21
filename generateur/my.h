/*
** my.h for my.h in /home/fossae_t/rendu/PSU_2015_minishell2/src
**
** Made by Thomas Fossaert
** Login   <fossae_t@epitech.net>
**
** Started on  Fri Apr  1 11:41:59 2016 Thomas Fossaert
** Last update Sat May 21 15:13:12 2016 Thomas Fossaert
*/

#ifndef		_MY_H_
# define	_MY_H_

void		print_my_tab_char(char **tab, int h);
void		print_my_tab_int(int **maze, int h, int w);
int		manage_error(int h, int w);
int		go_up(int **maze, int h, int w, int *valor);
int		go_right(int **maze, int h, int w, int *valor);
int		go_down(int **maze, int h, int w, int *valor);
int		go_left(int **maze, int h, int w, int *valor);
int		my_rand(int min, int max);
void		convert_tab(int **maze, int h, int w);
void		my_finish_tab(int **maze, int h, int w, int *valor);

#endif		/* _MY_H_ */
