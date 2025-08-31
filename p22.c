#include <stdio.h>

int main()
{
	float weight, height, bmi;

	printf("introdu greutatea ta (kg) :");
	scanf("%f", &weight);

	printf("introdu inaltimea ta (m) :");
	scanf("%f", &height);

	bmi = weight / (height * height);
	printf("body mass index = %.2f\r\n", bmi);

	if (bmi > 34.9)
		printf("clasa: extrem obez\r\n");
	else if(bmi > 29.9)
		printf("clasa: obez\r\n");
	else if(bmi > 24.9)
		printf("clasa: supraponderat\r\n");
	else if(bmi > 18.5)
		printf("clasa: normal\r\n");
	else
		printf("clasa: subponderat\r\n");

	return 0;
}