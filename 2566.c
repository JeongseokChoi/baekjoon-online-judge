#include <stdio.h>

int main()
{
    int n, i, j, max_i, max_j, max = 0;
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 9; j++)
        {
            scanf("%d", &n);
            if (n > max)
            {
                max = n;
                max_i = i + 1;
                max_j = j + 1;
            }
        }
    }
    printf("%d\n%d %d\n", max, max_i, max_j);

    return 0;
}
