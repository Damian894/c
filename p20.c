#include <stdio.h>

// > < == <= >=

int main()
{
	int x;

	printf("introdu x :");
	scanf("%d", &x);

	if(x == 5)
	{
		printf("numarul este egal cu 5\r\n");
		printf("hello din blocul 1!\r\n");
	}

	if(x > 5)
	{
		printf("numarul este mai mare ca 5\r\n");
		printf("hello din blocul 2!\r\n");
	}

	if(x < 5)
	{
		printf("numarul este mai mic ca 5\r\n");
		printf("hello din blocul 3!\r\n");
	}

	if(x <= 5)
	{
		printf("numarul este mai mic egal ca 5\r\n");
		printf("hello din blocul 4!\r\n");
	}

	if(x >= 5)
	{
		printf("numarul este mai mare egal ca 5\r\n");
		printf("hello din blocul 5!\r\n");
	}
	return 0;
}