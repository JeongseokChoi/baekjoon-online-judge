#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	int n;
	scanf("%d", &n);

	for (int i = 1; i < n; i++)
	{
		for (int x = 0; x < n - i; x++)
			printf(" ");
		printf("*");
		for (int x = 0; x < 2 * (i - 1) - 1; x++)
			printf(" ");
		if (i != 1)
			printf("*");
		printf("\n");
	}
	for (int x = 0; x < 2 * n - 1; x++)
		printf("*");
	printf("\n");

	return 0;
}