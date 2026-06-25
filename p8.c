/*
####               ####
	-> Variable -< 
####               ####
*/

#include <stdio.h>

int main()
{
	int box1 = 0;
	int box2 = 390;
	/*
	Variabilele ele nu pot incepe cu un numar sau cu un caracter special,
	dar pot incepe cu underscore (_),
	tot nu putem avea doua variabile ca box
	e interzis de avea int box si int box in acelasi bloc
	dar putem de exemplu box1 si box2
	*/

	printf("box1 = %d\t box2 = %d", box1, box2);
	return 0;// result OK
}