#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int first, second;
	scanf("%d", &first);
	scanf("%d", &second);

	int a, b, c;

	a = second % 10;
	b = (second/10) % 10;
	c= (second/100) % 10;

	printf("%d\n", first * a);
	printf("%d\n", first * b);
	printf("%d\n", first * c);
	printf("%d\n", first * second);

	return 0;
}