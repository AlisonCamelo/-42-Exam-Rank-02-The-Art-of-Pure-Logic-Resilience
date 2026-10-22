/*
Assignment name  : reverse_bits
Expected files   : reverse_bits.c
Allowed functions:
--------------------------------------------------------------------------------

Write a function that takes a byte, reverses it, bit by bit (like the
example) and returns the result.

Your function must be declared as follows:

unsigned char	reverse_bits(unsigned char octet);

Example:

  1 byte
_____________
 0010  0110
	 ||
	 \/
 0110  0100
*/

#include <stdio.h>

unsigned char	reverse_bits(unsigned char octet)
{
    unsigned char res = 0;
    int i = 8;

    while(i > 0)
    {
        res = (res << 1) | (octet & 1);
        octet = (octet >> 1);
        i--;
    }
    return(res);
}

int main(void)
{
    printf("%d\n", reverse_bits(2));
    return(0);
}