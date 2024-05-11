#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int SCORE;

	scanf("%d", &SCORE);

	if (SCORE >= 90 && SCORE <= 100)
		printf("A");

	else if (SCORE >= 80)
		printf("B");

	else if (SCORE >= 70)
		printf("C");
	
	else if (SCORE >= 60)
		printf("D");
	
	else
		printf("F");
	
	return 0;

}