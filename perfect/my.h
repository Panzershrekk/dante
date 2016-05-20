/*
** my.h for my.h in /home/fossae_t/rendu/PSU_2015_minishell2/src
**
** Made by Thomas Fossaert
** Login   <fossae_t@epitech.net>
**
** Started on  Fri Apr  1 11:41:59 2016 Thomas Fossaert
** Last update Fri May 20 15:13:47 2016 Thomas Fossaert
*/

#ifndef		_MY_H_
# define	_MY_H_

void		print_my_tab_char(char **tab, int h);
int		go_up(int **maze, int h, int w, int *valor);
int		go_right(int **maze, int h, int w, int *valor);
int		go_down(int **maze, int h, int w, int *valor);
int		go_left(int **maze, int h, int w, int *valor);
int		my_rand(int min, int max);
void		convert_tab(int **maze, int h, int w);

#endif		/* _MY_H_ */
