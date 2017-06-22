#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


int main()
{
	char buf[128];
	fgets(buf, 128, stdin);
	buf[strlen(buf) - 1] = '\0';

	char *p = buf;
	while (*p != '\0')
	{
		if (isalpha(*p))
		{
			if (isupper(*p))
				*p = ((*p - 'A') + 13) % 26 + 'A';
			else if (islower(*p))
				*p = ((*p - 'a') + 13) % 26 + 'a';
		}
		p++;
	}
	
	printf("%s\n", buf);

	return 0;
}