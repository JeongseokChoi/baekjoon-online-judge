#include <stdio.h>
#include <stdlib.h>
#include <string.h>


char str_stack[1000001];
int str_stack_top = 0;

int match_stack[1000001];
int match_stack_top = 0;

char str[1000001];
char bomb[37];


int main()
{
	scanf("%s", str);
	scanf("%s", bomb);

	int match_point = strlen(bomb);
	int point = 0;
	char *p = str;
	while (*p)
	{
		if (*p == bomb[point])
		{
			point++;

			str_stack[str_stack_top++] = *p;
			if (point == match_point)
			{
				str_stack_top -= match_point;
				if (match_stack_top > 0)
				{
					point = match_stack[--match_stack_top];
				}
				else
				{
					point = 0;
				}
			}
		}
		else
		{
			if (point > 0)
			{
				match_stack[match_stack_top++] = point;
				point = 0;
				continue;
			}
			else
			{
				match_stack_top = 0;
				str_stack[str_stack_top++] = *p;
			}
		}

		p++;
	}
	str_stack[str_stack_top] = '\0';

	if (strlen(str_stack) == 0)
		printf("FRULA\n");
	else
		printf("%s\n", str_stack);

	return 0;
}