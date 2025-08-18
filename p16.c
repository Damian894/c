#include <stdio.h>

// +1 increment
// -1 decrement
// x++ post increment
// ++x pre increment

int main()
{
	int x = 3, result;

	result = 4 + x++;
	// 4 + ++x -> 4 + 3 -> result = 7
	// ++x -> x = x + 1 -> x = 3 + 1 -> x = 4

	printf("result=%d\r\n", result);
	printf("x=%d\r\n", x);
	return 0;
}