#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int A, B, C;
	int HC, MC;

	scanf("%d %d", &A, &B);
	scanf("%d", &C);
	MC = C % 60;
	HC = C / 60;

	if ((B + MC) <= 59)
	{
		if ((A + HC) <= 23)
			printf("%d %d", A + HC, B + MC);

		else
			printf("%d %d", A + HC - 24, B + MC);
	}
	else
	{
		if ((A + HC) < 23)
			printf("%d %d", A + HC+1, B + MC-60);


		else
			printf("%d %d", A + HC - 23, B + MC-60);
	}

	return 0;
}