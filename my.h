/*
** my.h for my.h in /home/fossae_t/rendu/PSU_2015_minishell2/src
**
** Made by Thomas Fossaert
** Login   <fossae_t@epitech.net>
**
** Started on  Fri Apr  1 11:41:59 2016 Thomas Fossaert
** Last update Mon May  9 13:42:10 2016 Thomas Fossaert
*/

#ifndef		_MY_H_
# define	_MY_H_

void		print_my_tab_char(char **tab, int h);
int		my_rand(int min, int max);
void		go_up(char **maze, int h, int w, int *valor);
void		go_down(char **maze, int h, int w, int *valor);
void		go_left(char **maze, int h, int w, int *valor);
void		go_right(char **maze, int h, int w, int *valor);
char		**gen_maze(char **maze, int h, int w, int *valor);

#endif		/* _MY_H_ */
