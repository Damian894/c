#include <stdio.h>

/*
	long long int -9223372036854775808 to 9223372036854775807
	%lli
	8 byte

	unsigned long long int 0 ... 18446744073709551615
	%llu
	8 byte
*/

int main()
{
	unsigned long long nr;

	printf("sieof long long int is %d bytes\r\n", sizeof(nr));
	nr = 0;
	printf("min long long int is %llu\r\n", nr);
	nr = 18446744073709551615;
	printf("max long long int is %llu\r\n", nr);
	return 0;
}