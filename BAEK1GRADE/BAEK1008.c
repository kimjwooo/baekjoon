#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int a, b;
	scanf("%d %d", &a, &b);
	double result = (double)a / b;

	if (a > 0 && b < 10)
	{
		printf("%lf", result);
	}

	else
		printf("잘못된 값 입력");

	return 0;
}