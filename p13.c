#include <stdio.h>

/*
	float - numere cu virgula
	%f
	4 bytes

	double - numere cu virgula, precizie dubla
	%lf
	8 bytes
*/

int main()
{
	float my_float = 3.14;
	double my_double;

	my_double = 3.141592653589793;
	printf("my float is %.2f\r\n", my_float);
	printf("my double is %.15lf\r\n", my_double);
	return 0;
}