/*
Assignment name  : ft_rrange
Expected files   : ft_rrange.c
Allowed functions: malloc
--------------------------------------------------------------------------------

Write the following function:
int     *ft_rrange(int start, int end);
It must allocate (with malloc()) an array of integers, fill it with consecutive
values that begin at end and end at start (Including start and end !), then
return a pointer to the first value of the array.

Examples:
- With (1, 3) you will return an array containing 3, 2 and 1
- With (-1, 2) you will return an array containing 2, 1, 0 and -1.
- With (0, 0) you will return an array containing 0.
- With (0, -3) you will return an array containing -3, -2, -1 and 0.
*/
#include <stdlib.h>
#include <stdio.h>

int     *ft_rrange(int start, int end)
{
    int *result;
    int sum = 0;
    int i = 0;

    if(start >= end)
        sum = (start - end) + 1;
    else 
        sum = (end - start) + 1; 
    result = malloc(sizeof(int) * sum);
    if (!result)
        return (NULL);
    
    while (i < sum)
    {
        result[i] = end;
        if (start >= end)
            end++; 
        else
            end--; 
        i++;       
    }
    return (result);
    }
    
int main(void)
{
    int *arr;
    int i = 0;
    int start = 20;
    int end = 20;
    int size = (end >= start) ? (end - start + 1) : (start - end + 1);

    arr = ft_rrange(start, end);
    while (i < size)
    {
        printf("%d ", arr[i]);
        i++;
    }
    printf("\n");
    free(arr);
    return (0);

}