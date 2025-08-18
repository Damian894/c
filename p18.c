#include <stdio.h>

//scanf - scan formated

int main()
{
	float weight, height, bmi;

	printf("introdu greutatea ta (kg) :");
	scanf("%f", &weight);

	printf("introdu inaltimea ta (m) :");
	scanf("%f", &height);

	bmi = weight / (height * height);
	printf("body mass index = %.2f", bmi);

	return 0;
}