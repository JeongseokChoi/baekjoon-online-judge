#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


int main()
{
	char buf[128];
	memset(buf, 0, sizeof(buf));

	int n_lower, n_upper, n_numeric, n_blank;

	while (fgets(buf, 128, stdin))
	{
		buf[strlen(buf) - 1] = '\0';
		n_lower = n_upper = n_numeric = n_blank = 0;
		
		char *p = buf;
		while (*p != '\0')
		{
			if (islower(*p))
				++n_lower;
			else if (isupper(*p))
				++n_upper;
			else if (isblank(*p))
				++n_blank;
			else
				++n_numeric;

			++p;
		}

		printf("%d %d %d %d\n", n_lower, n_upper, n_numeric, n_blank);
	}

	return 0;
}