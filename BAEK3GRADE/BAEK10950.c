#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int T;
	int sum[100];
	int a, b;

	scanf("%d", &T);

	for (int i = 0; i < T; i++)
	{
		scanf("%d %d", &a, &b);
		sum[i] = a + b;
	}

	

	for (int k = 0; k < T; k++)
	{
		printf("%d\n", sum[k]);
	}



	return 0;
}