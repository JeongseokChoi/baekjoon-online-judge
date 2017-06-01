#include <stdio.h>
#include <stdlib.h>
#include <string.h>


#define TRUE 1
#define FALSE 0


int is_vps(char *s);


int main(int argc, char *argv[])
{
	int n_case;
	scanf("%d", &n_case);

	char str[1024];
	for (int i_case = 0; i_case < n_case; i_case++)
	{
		memset(str, 0, sizeof(str));
		scanf("%s", str);

		if (is_vps(str))
			printf("YES\n");
		else
			printf("NO\n");
	}

	return 0;
}


int is_vps(char *s)
{
	int val = 0;

	for (int i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == '(')
			val += 1;
		else if (s[i] == ')')
			val -= 1;
		else
			return -1;

		if (val < 0)
			return FALSE;
	}

	if (val == 0)
		return TRUE;
	else
		return FALSE;
}