#include <stdio.h>
#include <stdlib.h>

void printf_help(void);
float calculate(float nr1, float nr2, char operation);

int main(void)
{
	float nr1, nr2, result;
	char operation;

	// afisarea help
	printf_help();
	// citire date
	printf("nr1 = ");
	scanf("%f", &nr1);

	printf("nr2 = ");
	scanf("%f", &nr2);

	printf("operation: ");
	scanf(" %c", &operation);
	// calculare
	result = calculate(nr1, nr2, operation);
	// afisarea resultat
	printf("rezultat = %.4f\r\n", result);

	return 0;
}

void printf_help(void)
{
	printf("Calculator v1.1\r\n\r\n");
	printf("+ Adunare\r\n");
	printf("- Scadere\r\n");
	printf("* Inmultire\r\n");
	printf("/ Impartire\r\n\r\n");

	return;
}

float calculate(float nr1, float nr2, char operation)
{
	float result = 0;

	switch(operation)
	{
		case '+':
			result = nr1 + nr2;
			break;
		case '-':
			result = nr1 - nr2;
			break;
		case '*':
			result = nr1 * nr2;
			break;
		case '/':
			if(nr2 == 0)
			{
				printf("Este imposibil impartirea la 0 :(\r\n");
				exit(-2);
			}
			result = nr1 / nr2;
			break;
		default:
			printf("Nu suport asa operatie :(\r\n");
			exit(-1);

	}

	return result;
}