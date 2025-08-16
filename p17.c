#include <stdio.h>

// char -127 ... + 128
// unsigned char 0 ... +255

// r += x; r -= x; r *= x; r /= x; r %= x;

int main()
{
	unsigned char x = 30;
	short r = 10;

	r += x;//r = r + x; r = 40;
	printf("r=%d\r\n", r);

	r -= x;//r = r - x; r = 40 - 30 -> r = 10
	printf("r=%d\r\n", r);

	r *= x;//r = r * x; r = 10 * 30 ->r = 300
	printf("r=%d\r\n", r);

	r /= x;//r = r / x; r = 300 / 30 -> r = 10
	printf("r=%d\r\n", r);

	r %= x;//r = r % x; r = 10 % 30 -> r = 
	printf("r=%d\r\n", r);
	return 0;
}