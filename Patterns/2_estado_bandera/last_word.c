/*Assignment name  : last_word
Expected files   : last_word.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes a string and displays its last word followed by a \n.

A word is a section of string delimited by spaces/tabs or by the start/end of
the string.

If the number of parameters is not 1, or there are no words, display a newline.

Example:

$> ./last_word "FOR PONY" | cat -e
PONY$
$> ./last_word "this        ...       is sparta, then again, maybe    not" | cat -e
not$
$> ./last_word "   " | cat -e
$
$> ./last_word "a" "b" | cat -e
$
$> ./last_word "  lorem,ipsum  " | cat -e
lorem,ipsum$
$>*/

#include <unistd.h>

int main(int argc, char **argv)
{
    int i = 0;
    char *word = argv[1];

    if(argc != 2)
    {
        write(1, "\n", 1);
        return(1);
    }
    while(word[i])
        i++;
    i--;
    while(word[i] == ' ' || word[i] == '\t')
        i--;
    while(word[i] && (word[i] != ' ' && word[i] != '\t'))
        i--;
    i++;
    while(word[i] && (word[i] != ' ' && word[i] != '\t'))
    {
        write(1, &word[i], 1);
        i++;
    }
    write(1, "\n", 1);
    return(0);
}