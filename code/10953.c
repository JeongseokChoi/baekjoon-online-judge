#include <stdio.h>


int main(int argc, char *argv[])
{
	int n, a, b;

	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d%*c%d", &a, &b);
		printf("%d\n", a + b);
	}

	return 0;
}