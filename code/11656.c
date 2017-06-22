#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char str[1001];
char *suffix[1000];


int minimum(unsigned a, unsigned b)
{
	return (a < b) ? a : b;
}


int cmp(char **s1, char **s2)
{
	int len = minimum(strlen(*s1), strlen(*s2));

	for (int i = 0; i < len; i++)
	{
		if ((*s1)[i] < (*s2)[i])
			return -1;
		else if ((*s1)[i] > (*s2)[i])
			return 1;
		else
			continue;
	}

	if (strlen(*s1) < strlen(*s2))
		return -1;
	else if (strlen(*s1) > strlen(*s2))
		return 1;
	else
		return 0;
}


int main()
{
	scanf("%s", str);
	int len = strlen(str);
	for (int i = 0; i < len; i++)
	{
		suffix[i] = str + i;
	}

	qsort(&suffix[0], len, sizeof(char *), cmp);

	for (int i = 0; i < len; i++)
		printf("%s\n", suffix[i]);

	return 0;
}