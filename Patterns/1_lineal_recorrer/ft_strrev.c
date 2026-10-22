/*
Assignment name  : ft_strrev
Expected files   : ft_strrev.c
Allowed functions:
--------------------------------------------------------------------------------

Write a function that reverses (in-place) a string.

It must return its parameter.

Your function must be declared as follows:

char    *ft_strrev(char *str);

*/
#include <stdio.h>

char    *ft_strrev(char *str)
{
    int i = 0;
    int j = 0;
    char *temp;

    while(str[i])
        i++;
    i--;

    while(j < i)
    {
        temp = str[j];
        str[j] = str[i];
        str[i] = temp;
        j++;
        i--;
    }
    return(str);
}