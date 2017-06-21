#include <stdio.h>

int main()
{
	int n, x, min, max;

	min = 1000000;
	max = -1000000;

	scanf("%d", &n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &x);
		if (x < min)
			min = x;
		if (x > max)
			max = x;
	}

	printf("%d %d\n", min, max);

	return 0;
}