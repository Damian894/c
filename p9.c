#include <stdio.h>

// sizeof()

/*
    int -2147483648 ... +2147483647
    %d
    4 bytes (octets) = 32 biti
    2 bytes

    unsigned int 0 ... 4294967295
    %u
    4 bytes (octets) = 32 biti
    2 bytes
*/

int main() 
{ 
    unsigned int u_nr;

    printf("Size of unsigned int is %u bytes", sizeof(u_nr));
    
    return 0;
}