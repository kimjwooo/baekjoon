#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// ERROR : ���� �ð� �ʰ�

int main(void)
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
		printf("CASE #\d: %d\n",k+1, result[k]);
	}

	return 0;
}