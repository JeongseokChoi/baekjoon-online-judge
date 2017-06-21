#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char buf[128];
	int len;

	scanf("%s", buf);
	len = strlen(buf);

	for (int i = 0; i < len; i++)
	{
		printf("%c", buf[i]);
		if (i % 10 == 9)
			printf("\n");
	}

	return 0;
}