/*
Assignment name  : inter
Expected files   : inter.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes two strings and displays, without doubles, the
characters that appear in both strings, in the order they appear in the first
one.
The display will be followed by a \n.
If the number of arguments is not 2, the program displays \n.
Examples:

$>./inter "padinton" "paqefwtdjetyiytjneytjoeyjnejeyj" | cat -e
padinto$
$>./inter ddf6vewg64f gtwthgdwthdwfteewhrtag6h4ffdhsd | cat -e
df6ewg4$
$>./inter "rien" "cette phrase ne cache rien" | cat -e
rien$
$>./inter | cat -e
$
*/

#include <unistd.h>

int its_in_str2(char *str2, char c)
{
    int i = 0;

    while(str2[i])
    {
        if(str2[i] == c)
            return(1);
        i++;
    }
    return(0);
}
int its_repeated(char *str1, char c, int i)
{
    int j = 0;

    while(j < i)
    {
        if(str1[j] == c)
            return(1);
        j++;
    }
    return(0);
}
int main(int argc, char **argv)
{
    int i = 0;
    char *str1 = argv[1];
    char *str2 = argv[2];

    if(argc != 3)
    {
        write(1, "\n", 1);
        return(1);
    }

    while(str1[i])
    {   
        if((its_repeated(str1, str1[i], i) == 0) && ((its_in_str2(str2, str1[i]) == 1)))
            write(1, &str1[i], 1);
        i++;
    }
    write(1, "\n", 1);
    return(0);
}