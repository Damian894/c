#include <stdio.h>

int main()
{
	float nr1, nr2, result = 0;
	char operation;// +, -, *, /

	printf("nr 1= ");
	scanf("%f", &nr1);

	printf("nr2 = ");
	scanf("%f", &nr2);

	printf("operatie (+, -, *, /) : ");
	scanf(" %c", &operation);

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
			result = nr1 / nr2;
			break;
		default :
			printf("nu suport asa operatie");
	}

	printf("rezultat: %f", result);

	return 0;
}