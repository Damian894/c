#include <stdio.h>

int main(void)
{
	char note[5];

	note[0] = 10;
	note[1] = 8;
	note[2] = 4;
	note[3] = 8;
	note[4] = 9;

	printf("nota1 = %d\r\n", note[0]);
	printf("nota2 = %d\r\n", note[1]);
	printf("nota3 = %d\r\n", note[2]);
	printf("nota4 = %d\r\n", note[3]);
	printf("nota5 = %d\r\n", note[4]);
	return 0;
}