/*
Assignment name  : expand_str
Expected files   : expand_str.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes a string and displays it with exactly three spaces
between each word, with no spaces or tabs either at the beginning or the end,
followed by a newline.

A word is a section of string delimited either by spaces/tabs, or by the
start/end of the string.

If the number of parameters is not 1, or if there are no words, simply display
a newline.

Examples:

$> ./expand_str "See? It's easy to print the same thing" | cat -e
See?   It's   easy   to   print   the   same   thing$
$> ./expand_str " this        time it      will     be    more complex  " | cat -e
this   time   it   will   be   more   complex$
$> ./expand_str "No S*** Sherlock..." "nAw S*** ShErLaWQ..." | cat -e
$
$> ./expand_str "" | cat -e
$
$>
*/

#include <unistd.h>


//"the same thing     "
//
int main(int argc, char **argv)
{
    int iterar = 0;
    int ya_imprimio_palabra = 0;
    char *palabra = argv[1];

    if (argc != 2)
    {
        write(1, "\n", 1);
        return(1);
    }
    while(palabra[iterar] == ' ' && palabra[iterar] == '\t')
        iterar++;
    while(palabra[iterar] != '\0')
    {
        if(palabra[iterar] == ' ' || palabra[iterar] == '\t')
        {
            ya_imprimio_palabra = 1;    
            iterar++;
            continue;
        }
        if(ya_imprimio_palabra == 1)
        {
            write(1, "   ", 3);
            ya_imprimio_palabra = 0;
        }
        write(1, &palabra[iterar], 1);
        iterar++;
    }
    write(1, "\n", 1);
    return(0);
}