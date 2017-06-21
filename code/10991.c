#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	int n;
	scanf("%d", &n);

	for (int i = 1; i <= n; i++)
	{
		for (int x = 0; x < n - i; x++)
			printf(" ");
		for (int x = 0; x < i; x++)
			printf("* ");
		printf("\n");
	}

	return 0;
}