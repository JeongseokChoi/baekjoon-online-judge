#include <stdio.h>
#include <stdlib.h>
#include <string.h>


#define OPEN '('
#define CLOSE ')'


char buf[100001];
int stack_sz = 0;


int main()
{
	int answer = 0;

	scanf("%s", buf);

	char *p = buf;
	while (*p != '\0')
	{
		if (*p == OPEN)
		{
			stack_sz += 1;
		}
		else
		{
			if (*(p - 1) == OPEN)
			{
				answer += stack_sz - 1;
			}
			else
			{
				answer += 1;
			}
			stack_sz -= 1;
		}

		p++;
	}

	printf("%d\n", answer);

	return 0;
}


int is_raser(char *p)
{
	return ((*p == OPEN) && (*(p + 1) == CLOSE));
}