/*
Nombre de la tarea: ft_itoa
Archivos esperados: ft_itoa.c
Funciones permitidas: malloc
--------------------------------------------------------------------------------

Escribe una función que tome un entero y lo convierta en una cadena terminada en nulo.
La función devuelve el resultado en un array de caracteres que debes asignar.

Tu función debe ser declarada de la siguiente manera:

char	*ft_itoa(int nbr);
*/

#include <stdlib.h>
#include <stdio.h>

int ft_find_nmbr(int i)
{
    long num = i;
    int count = 0;

    if (num < 0)
    {
        num = -num;
        count =  count + 1;
    }
    if (num == 0)
        return(1);
    while(num > 0)
    {
        num = num / 10;
        count++;
    }
    return(count);
}
char *ft_itoa(int nbr)
{
    long num = nbr;
    int size = ft_find_nmbr(nbr);
    char *space = malloc(sizeof(char) * (size + 1));
    int is_negative = 0;

    if(!space)
        return(NULL);
    space[size] = '\0';
    size--;

    if (num < 0)
    {
        num = -num;
        is_negative = 1;
    }
    while(size >= 0)
    {
        space[size] = (num % 10) + '0';
        num = num / 10; 
        size--;
    }
    if (is_negative == 1)
        space[0] = '-';
    return(space);
}
int main(int argc, char **argv)
{
    if(argc != 2)
    {
        return(1);
    }
    int numero = atoi(argv[1]);
    char *res = ft_itoa(numero);
    printf("%s\n", res);
    return(0);
}
