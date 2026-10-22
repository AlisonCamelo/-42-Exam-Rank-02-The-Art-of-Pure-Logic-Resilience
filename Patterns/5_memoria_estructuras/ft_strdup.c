
/*
Nombre de la asignación: ft_strdup
Archivos esperados: ft_strdup.c
Funciones permitidas: malloc
--------------------------------------------------------------------------------

Reproduce el comportamiento de la función strdup (man strdup).

Tu función debe ser declarada de la siguiente manera:

char *ft_strdup(char *src);
*/

#include <stdio.h>
#include <stdlib.h>

int ft_strlen(char *src)
{
    int i = 0;

    while(src[i])
    {
        i++;
    }
    return(i);
}
char *ft_strdup(char *src)
{
    int i = 0;
    int len = ft_strlen(src);
    char *new_str = malloc((sizeof(char)) * (len + 1));
    if(!new_str)
        return(NULL);

    while(src[i] != '\0')
    {
        new_str[i] = src[i];
        i++;
    }
    new_str[i] = '\0';
    return(new_str);
}
int main(void)
{
    printf("%s", ft_strdup("Alison"));
    return(0);
}