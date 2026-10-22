/*
Assignment name  : ft_list_remove_if
Expected files   : ft_list_remove_if.c
Allowed functions: free
--------------------------------------------------------------------------------

Write a function called ft_list_remove_if that removes from the
passed list any element the data of which is "equal" to the reference data.

It will be declared as follows :

void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)());

cmp takes two void* and returns 0 when both parameters are equal.

You have to use the ft_list.h file, which will contain:

$>cat ft_list.h
typedef struct      s_list
{
    struct s_list   *next;
    void            *data;
}                   t_list;
$>
*/

#include <stdlib.h>
#include "ft_list.h"

void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
    t_list *actual;

    if(begin_list == NULL || *begin_list == NULL)
        return ;

    actual = *begin_list;
    if(cmp(actual->data, data_ref) == 0)
    {
        *begin_list = actual->next;
        free(actual);
        ft_list_remove_if(begin_list, data_ref, cmp);
    }
    else
    {
        ft_list_remove_if(&((*begin_list)->next), data_ref, cmp);
    }
}

/*
Usas begin_list para cumplir con el tipo que pide la función.

Usas *begin_list para modificar el vagón/cabeza actual de la lista.

Usas &(...->next) para convertir un enlace normal en 
un puntero doble y pasárselo a la siguiente llamada recursiva.
*/