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
	dar putem de exemplu box1 si box2,
	mai este interzis sa facem spatiu la o variabila
	remplasam aste pe underscore (_),
	Si litere mari nu este de dorit la variabila
	dar in afara in gilimele in pritf desigur
	*/

	printf("Box1 = %d\t Box2 = %d", box1, box2);
	return 0;// result OK
}