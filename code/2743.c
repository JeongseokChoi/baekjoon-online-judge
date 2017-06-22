#include <stdio.h>
#include <string.h>

int main()
{
	char buf[128];
	scanf("%s", buf);

	printf("%d\n", strlen(buf));

	return 0;
}