/*
Assignment name  : union
Expected files   : union.c
Allowed functions: write
--------------------------------------------------------------------------------

Write a program that takes two strings and displays, without doubles, the
characters that appear in either one of the strings.

The display will be in the order characters appear in the command line, and
will be followed by a \n.

Example:

$>./union zpadinton "paqefwtdjetyiytjneytjoeyjnejeyj" | cat -e
zpadintoqefwjy$
$>./union ddf6vewg64f gtwthgdwthdwfteewhrtag6h4ffdhsd | cat -e
df6vewg4thras$
$>./union "rien" "cette phrase ne cache rien" | cat -e
rienct phas$
$>./union | cat -e
$
$>
$>./union "rien" | cat -e
$
$>

*/


// j   i
// zpadinton "paqefwtdjetyiytjneytjoeyjnejeyj"

#include <unistd.h>

int is_in_str(char *str1, char c)
{
   int j = 0;

    while(str1[j])
    {
        if(str1[j] == c)
            return(1);
        j++;
    }
    return(0);
}
int its_not_repeated(char *str1, char c, int i)
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
    int i= 0 ;
    char *str1 = argv[1];
    char *str2 = argv[2];

    if(argc != 3)
    {
        write(1, "\n", 1);
        return(1);
    }

    while(str1[i])
    {
        if((its_not_repeated(str1, str1[i], i) == 0))
            write(1, &str1[i], 1);
        i++;
    }
    i = 0;
    while(str2[i])
    {
        if((is_in_str(str1, str2[i]) == 0) && (its_not_repeated(str2, str2[i], i) == 0))
            write(1, &str2[i], 1);
        i++;
    }
    write(1, "\n", 1);
    return(0);
}