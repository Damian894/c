#include <stdio.h>

// != = diferit de...

int main()
{
	short i = 16;

	while(i != 0)
	{
		printf("i = %hi\r\n", i);
		i = i / 2;
	}

	return 0;
}