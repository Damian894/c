#include <stdio.h>

void change_me(int a[])
{
	a[0] = 89;
	printf("change_me sa efectuat!!!\r\n");
}

int main(void)
{
	int a[4] = {0};

	printf("a[0] = %d\r\n", a[0]);
	change_me(a);
	printf("a[0] = %d\r\n", a[0]);

	return 0;
}
