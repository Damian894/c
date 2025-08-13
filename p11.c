#include <stdio.h>

/*
    long int -2147483648 ... +2147483647
    %li ~ %d
    4 byte
    8 byte

    unsigned long int 0 ... +4294967295
    %lu ~ %u
    4 byte
    8 byte
*/

int main()
{
    long nr;

    nr = 11231231;
    printf("nr is %li\r\n", nr);
    printf("sizeof long int: %li bytes\r\n", sizeof(nr));
    return 0;
}