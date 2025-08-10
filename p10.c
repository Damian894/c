#include <stdio.h>

/*
    short int -32768 ... +32767
    %hi
    2 bytes

    unsigned short int 0 ... 65535
    %hu
    2 bytes
*/

int main()
{
    unsigned short nr;

    printf("sizeof ushort is %hu bytes", sizeof(nr));
    return 0;
}