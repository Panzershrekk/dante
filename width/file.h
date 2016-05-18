/*
** file.h for myh in /home/fossae_t/rendu/dante/width
**
** Made by Thomas Fossaert
** Login   <fossae_t@epitech.net>
**
** Started on  Tue May 17 16:54:13 2016 Thomas Fossaert
** Last update Wed May 18 15:57:07 2016 Thomas Fossaert
*/

#ifndef H_FILE
# define H_FILE

# ifndef ERROR
#  define ERROR (1)
# endif

# ifndef SUCCESS
#  define SUCCESS (0)
# endif

typedef struct	s_data
{
  int x_max;
  int y_max;
}		t_data;

char		**gen_tab(char *str);
void		*p_error(char *str);
int		print_str(int i, char *str);
int		my_strlen(char *str);
int		find_path(int x, int y, t_data *data, char **map);
int		**convert_tab(char **map, t_data *data);

typedef struct		s_elem
{
    int nombre;
    struct s_elem	*suivant;
}			t_elem;

typedef struct	s_file
{
    t_elem *premier;
}		t_file;

t_file *initialiser();
void enfiler(t_file *file, int nvNombre);
int defiler(t_file *file);
void afficherFile(t_file *file);

#endif
