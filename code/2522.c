#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(int argc, char *argv[])
{
    int n, i, j;

    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        for (j = 0; j < n - i; j++)
            printf(" ");
        for (j = 0; j < i; j++)
            printf("*");
        printf("\n");
    }
    for (i = 1; i <= n - 1; i++)
    {
        for (j = 0; j < i; j++)
            printf(" ");
        for (j = 0; j < n - i; j++)
            printf("*");
        printf("\n");
    }

    return 0;
}
