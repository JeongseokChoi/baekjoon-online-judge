#include <stdio.h>

int main()
{
    int A, B, C, ABC;
    int cntOccur[10], i;

    for (i = 0; i < 10; i++)
        cntOccur[i] = 0;

    scanf("%d%d%d", &A, &B, &C);
    ABC = A * B * C;

    while (ABC > 0)
    {
        cntOccur[ABC % 10] += 1;
        ABC /= 10;
    }

    for (i = 0; i < 10; i++)
        printf("%d\n", cntOccur[i]);

    return 0;
}
