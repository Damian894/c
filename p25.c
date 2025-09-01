#include <stdio.h>

int g_counter = 0;

void change_me()
{
	g_counter = 10;
}

int main()
{
	printf("counter = %d\r\n", g_counter);
	change_me();
	printf("counter = %d\r\n", g_counter);
	return 0;
}
