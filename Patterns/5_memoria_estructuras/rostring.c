/*
Assignment name  : rostring
Expected files   : rostring.c
Allowed functions: write, malloc, free
--------------------------------------------------------------------------------

Write a program that takes a string and displays this string after rotating it
one word to the left.

Thus, the first word becomes the last, and others stay in the same order.

==========A "word" is defined as a part of a string delimited either by spaces/tabs, or
==========by the start/end of the string.

Words will be separated by only one space in the output.

==========If there's less than one argument, the program displays \n.

Example:

$>./rostring "abc   " | cat -e
abc$
$>
$>./rostring "Que la      lumiere soit et la lumiere fut"
la lumiere soit et la lumiere fut Que
$>
$>./rostring "     AkjhZ zLKIJz , 23y"
zLKIJz , 23y AkjhZ
$>
$>./rostring "first" "2" "11000000"
first
$>
$>./rostring | cat -e
$
$> 
*/

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
int main(int argc, char **argv)
{
    int i = 0;
    int fst_wrd = 0;
    int end = 0;
    char *word = argv[1];
    
    if(argc < 2)
    {
        write(1, "\n", 1);
        return(1);
    }
    while(word[i] && (word[i] == ' ' || word[i] == '\t'))
        i++;
    if(!word[i])
    {
        write(1, "\n", 1);
        return(1);
    }
    fst_wrd = i;
    end = i;
    while(word[i] && (word[i] != ' ' && word[i] != '\t'))
    {
        i++;
        end++;
    }
    end--;
    while(word[i] && (word[i] == ' ' || word[i] == '\t'))
        i++;
    while(word[i])
    {
        while(word[i] && (word[i] != ' ' && word[i] != '\t'))
        {
            write(1, &word[i], 1);
            i++;
        }
        while(word[i] && (word[i] == ' ' || word[i] == '\t'))
            i++;
        write(1, " ", 1);
    }
    i--;
    while(fst_wrd <= end && (word[fst_wrd] != ' ' && word[fst_wrd] != '\t'))
    {
        write(1, &word[fst_wrd], 1);
        fst_wrd++;
    }
    write(1, "\n", 1);
    return(0);
}

/*
#include <unistd.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    int i = 0;
    int j = 0;
    char *frase = argv[1];

    if(argc != 2)
    {
        write(1, "\n", 1);
        return(1);
    }
    while(frase[i] && (frase[i] == ' ' || frase[i] == '\t'))
    i++;
    if(!frase[i])
    {
        write(1, "\n", 1);
        return(1);
    }
    j = i;
    while(frase[j] && frase[j] != ' ' && frase[j] != '\t')
    j++;
    while(frase[j] && frase[j] == ' ' && frase[j] == '\t')
    j++;
    if(frase[j])
    {
        int temp = j;
        while(frase[temp])
        {
            if(frase[temp] == ' ' || frase[temp] == '\t')
            {
                write(1, " ", 1);
                while(frase[temp] && (frase[temp] == ' ' || frase[temp] == '\t'))
                temp++;
            }
            if(frase[temp])
            {
                write(1, &frase[temp], 1);
                temp++;
            }
        }
        write(1, " ", 1);
    }
    while(frase[i] && frase[i] != ' ' && frase[i] != '\t')
    {
        write(1, &frase[i], 1);
        i++;
    }
    write(1, "\n", 1);
    return(0);
}
//"     AkjhZ zLKIJz , 23y"
*/