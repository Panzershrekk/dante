/*
** file.h for myh in /home/fossae_t/rendu/dante/width
**
** Made by Thomas Fossaert
** Login   <fossae_t@epitech.net>
**
** Started on  Tue May 17 16:54:13 2016 Thomas Fossaert
** Last update Tue May 17 16:55:28 2016 Thomas Fossaert
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


typedef struct Element Element;
struct Element
{
    int nombre;
    Element *suivant;
};

typedef struct File File;
struct File
{
    Element *premier;
};

File *initialiser();
void enfiler(File *file, int nvNombre);
int defiler(File *file);
void afficherFile(File *file);

#endif
