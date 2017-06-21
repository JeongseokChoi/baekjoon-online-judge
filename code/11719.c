#include <stdio.h>
#include <string.h>

int main()
{
	char buf[1024];
	char *ret;

	while (1)
	{
		ret = fgets(buf, 1024, stdin);
		if (ret == NULL)
			break;
		printf("%s", ret, buf);
	}

	return 0;
}