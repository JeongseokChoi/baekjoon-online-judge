#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(int argc, char *argv[])
{
    char str[201];
    int n, i;

    memset(str, ' ', sizeof(str));

    scanf("%d", &n);
    str[(2 * n) + 1] = '\0';

    for (i = 0; i < n; i++)
    {
        str[i] = '*';
        str[(2 * n - 1) - i] = '*';
        printf("%s\n", str);
    }
    for (i = 1; i < n; i++)
    {
        str[n - i] = ' ';
        str[(n - 1) + i] = ' ';
        printf("%s\n", str);
    }

    return 0;
}
