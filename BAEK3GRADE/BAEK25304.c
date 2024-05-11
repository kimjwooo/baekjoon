#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	long int X;
	int N, a, b;
	int sum = 0;

	scanf("%ld", &X);
	scanf("%d", &N);

	for (int i = 0; i < N; i++)
	{
		scanf("%d %d", &a, &b);
		sum = sum + a * b;
	}

	if (sum == X)
		printf("YES");

	else
		printf("NO");

	return 0;
}