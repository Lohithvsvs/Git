#include <stdio.h>
int big3()
{
	int A, B, C;

	printf("Enter three numbers: ");
	scanf("%d %d %d", &A, &B, &C);

	if (A >= B && A >= C)
		printf("%d is the largest number.", A);

	else if (B >= A && B >= C)
		printf("%d is the largest number.", B);

	else
		printf("%d is the largest number.", C);

	return 0;
}

