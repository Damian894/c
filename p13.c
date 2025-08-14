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
	double my_double;

	my_double = 3.141592653589793;
	printf("my double is %.15lf", my_double);
	return 0;
}