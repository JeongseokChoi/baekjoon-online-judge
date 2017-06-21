#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
	int n;
	char buf[1024];

	scanf("%d", &n);
	scanf("%s", buf);

	int sum = 0;
	char *tmp = buf;
	for (int i = 0; i < n; i++)
	{
		sum += (*tmp - '0');
		tmp += 1;
	}
	printf("%d\n", sum);

	return 0;
}