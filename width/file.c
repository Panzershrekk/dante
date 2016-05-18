#include <stdio.h>
#include <stdlib.h>
#include "file.h"

t_file		*initialiser()
{
    t_file *file = malloc(sizeof(*file));
    file->premier = NULL;

    return file;
}


void		enfiler(t_file *file, int nvNombre)
{
    t_elem *nouveau = malloc(sizeof(*nouveau));
    if (file == NULL || nouveau == NULL)
    {
        exit(EXIT_FAILURE);
    }

    nouveau->nombre = nvNombre;
    nouveau->suivant = NULL;

    if (file->premier != NULL) /* La file n'est pas vide */
    {
        /* On se positionne à la fin de la file */
        t_elem *elementActuel = file->premier;
        while (elementActuel->suivant != NULL)
        {
            elementActuel = elementActuel->suivant;
        }
        elementActuel->suivant = nouveau;
    }
    else /* La file est vide, notre élément est le premier */
    {
        file->premier = nouveau;
    }
}


int		defiler(t_file *file)
{
    if (file == NULL)
    {
        exit(EXIT_FAILURE);
    }

    int nombreDefile = 0;

    /* On vérifie s'il y a quelque chose à défiler */
    if (file->premier != NULL)
    {
        t_elem *elementDefile = file->premier;

        nombreDefile = elementDefile->nombre;
        file->premier = elementDefile->suivant;
        free(elementDefile);
    }

    return nombreDefile;
}

void		afficherFile(t_file *file)
{
    if (file == NULL)
    {
        exit(EXIT_FAILURE);
    }

    t_elem *element = file->premier;

    while (element != NULL)
    {
        printf("%d ", element->nombre);
        element = element->suivant;
    }

    printf("\n");
}
