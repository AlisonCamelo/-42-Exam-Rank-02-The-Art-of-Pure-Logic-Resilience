/*
Assignment name  : ft_split
Expected files   : ft_split.c
Allowed functions: malloc
--------------------------------------------------------------------------------

Write a function that takes a string, splits it into words, and returns them as
a NULL-terminated array of strings.

A "word" is defined as a part of a string delimited either by spaces/tabs/new
lines, or by the start/end of the string.

Your function must be declared as follows:

char    **ft_split(char *str);
*/

#include <stdlib.h>
#include <stdio.h>

char *ft_malloc(int k)
{
    char *espacio;

    espacio = malloc(sizeof(char) * (k + 1));
    if(!espacio)
        return (NULL);
    return(espacio);
}
char    **ft_split(char *str)
{ 
    int i = 0;
    int j = 0;
    int k = 0;
    int l = 0;
    int start;
    char **frase;
    char *palabra;

    if(!str)
        return(NULL);
    while(str[i] == ' ' && str[i] == '\t' && str[i] == '\n')
        i++;
    while(str[i])
    {
        if((str[i] && (str[i] != ' ' && str[i] != '\t' && str[i] != '\n')))
            k++;
        i++;
        continue;
    }
    frase = malloc(sizeof(char *) * (k + 1));
    i = 0;
    while(str[i])
    {
        while(str[i] && (str[i] == ' ' && str[i] == '\t' && str[i] == '\n'))
            i++;
        start = i;
        while(str[i] && (str[i] != ' ' && str[i] != '\t' && str[i] != '\n'))
        {
            j++;
            i++;
        }
        frase[start] = ft_malloc(j);
        while(l < j)
        {
            frase[start][l] = str[start + l];
            l++;
        }
        frase[start][l] = '\0';
        start++;
    }
    frase[start] = NULL;
    return(frase);
}

int main(void)
{
    char **result;
    int i = 0;

    result = ft_split("alison dayana camelo     ");
    if (!result)
    {
        printf("NULL\n");
        return (1);
    }

    while (result[i] != NULL)
    {
        printf("Palabra[%d]: %s\n", i, result[i]);
        i++;
    }
    return (0);
}
