#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int a, b, c;

	scanf("%d %d %d", &a, &b, &c);

	if (1<=(a,b,c)&&(a,b,c)<=1000000000000)
	{
		printf("%d\n", a + b + c);

	}
	else
		printf("ERROR\n");

	return 0;
}