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


	if(bmi > 25)
	{
		printf("depasim norma");
	}
	else
	{
		printf("nu depasim norma");
	}
	return 0;
}