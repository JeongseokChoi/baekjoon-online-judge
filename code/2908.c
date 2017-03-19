#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
    char a[11], b[11];
    scanf("%s %s", a, b);

    int a_len = strlen(a);
    int b_len = strlen(b);

    for (int i = 0; i < a_len / 2; i++)
    {
        int tmp = a[i];
        a[i] = a[(a_len - 1) - i];
        a[(a_len - 1) - i] = tmp;
    }
    for (int i = 0; i < b_len / 2; i++)
    {
        int tmp = b[i];
        b[i] = b[(b_len - 1) - i];
        b[(b_len - 1) - i] = tmp;
    }

    if (strcmp(a, b) > 0)
        printf("%s\n", a);
    else
        printf("%s\n", b);

    return 0;
}
