#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int first, second, third;

	scanf("%d %d %d", &first, &second, &third);

	if (first == second && second == third)
		printf("%d", 10000 + first * 1000);

	else if (first == second && second != third)
		printf("%d", 1000 + first * 100);

	else if (first != second && second == third)
		printf("%d", 1000 + second * 100);

	else if (second != first && first == third)
		printf("%d", 1000 + third * 100);

	else
	{
		if (first > second && first > third)
			printf("%d", 100 * first);
		else if (second > first && second > third)
			printf("%d", 100 * second);
		else 
			printf("%d", 100 * third);
	}

	return 0;
}