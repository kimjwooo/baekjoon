#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 어떻게 하면 실행시간을 줄일 수 있을까

int main()
{
	int T;
	int a, b;
	int result[10];

	scanf("%d", &T);

	for (int i = 0; i < T; i++)
	{
		scanf(" %d %d", &a, &b);
		result[i] = a + b;
	}

	for (int k = 0; k < T; k++)
	{
		printf("%d\n", result[k]);
	}

	return 0;
}