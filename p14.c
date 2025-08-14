#include <stdio.h>

/*
	char (character) - pentru stocarea caracterelor
	%c
	1 byte
	-128 ... +127
*/

int main()
{
	char c;

	c = 'X';// c = 88
	printf("caracterul este %c\r\n", c);// %c convertire in cod caracter ASCII
	printf("sizeof char is %d byte", sizeof(c));
	return 0;// result OK
}