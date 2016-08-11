#include <stdio.h>

int main()
{
    int n, i, max = 0, max_i;
    for (i = 0; i < 9; i++)
    {
        scanf("%d", &n);
        if (n > max)
        {
            max = n;
            max_i = i + 1;
        }
    }
    printf("%d\n%d\n", max, max_i);

    return 0;
}
