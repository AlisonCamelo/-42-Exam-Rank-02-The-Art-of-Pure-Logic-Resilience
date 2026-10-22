/*
Assignment name  : add_prime_sum
Expected files   : add_prime_sum.c
Allowed functions: write, exit
--------------------------------------------------------------------------------

Write a program that takes a positive integer as argument and displays the sum
of all prime numbers inferior or equal to it followed by a newline.

If the number of arguments is not 1, or the argument is not a positive number,
just display 0 followed by a newline.

Yes, the examples are right.

Examples:

$>./add_prime_sum 5
10
$>./add_prime_sum 7 | cat -e
17$
$>./add_prime_sum | cat -e
0$
$>
*/
#include <stdio.h>
#include <unistd.h>

void ft_putnbr(int i)
{
    char c;

    if(i > 9)
        ft_putnbr(i / 10);
    c = (i % 10) + '0';
    write(1, &c, 1);
}
int ft_atoi(char *str)
{
    int i = 0;
    int res = 0;
    int sign = 1;

    while(str[i] == ' ' ||  str[i] == '\t')
        i++;
    if(str[i] == '-' || str[i] == '+')
    {
        if(str[i] == '-')
        {
            sign = -1;
        }
        i++;
    }
    while(str[i] >= '0' && str[i] <= '9')
    {
        res  = (res * 10) + (str[i] - '0');
        i++;
    }
    return(sign * res);
}
int is_prime(int i)
{
    int div = 2;

    if (i <= 1)
        return(0);
    while(div * div <= i)
    {
        if(i % div == 0)
            return(0);
        div++;
    }
    printf("%d | L66\n", i);
    return(1);
}
void add_prime_sum(char *str)
{
    int num = ft_atoi(str);
    int i = 2;
    int sum = 0;

    if(num < 1)
    {
        write(1, "0\n", 2);
        return ;
    }
    while(i <= num)
    {
        if(is_prime(i) == 1)
            sum = sum + i;
        i++;
    }
    ft_putnbr(sum);
    write(1, "\n", 1);
}

int main(int argc, char **argv)
{
    char *str = argv[1];

    if(argc != 2)
    {
        write(1, "0\n", 2);
        return(1);
    }
    add_prime_sum(str);    
    return(0);
}