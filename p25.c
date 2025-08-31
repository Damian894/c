#include <stdio.h>

void printf_something();
void print_goodbye();

int main()
{
	printf_something();

	return 0;
}

void printf_something()
{
	printf("hello World!\r\n");
	printf("I love  pizza!\r\n");
	print_goodbye();

	return;
}

void print_goodbye()
{
	printf("Goodbye World!\r\n");
	return;
}