#include <stdio.h>


int m, n[31], i, j, c, d;


void h(int n, int a, int b, int c)
{
    if (n)
    {
        h(n - 1, a, c, b);
        printf("%d %d\n", a, c);
        h(n - 1, b, a, c);
    }
}


int main()
{
    c = d = 0;
    n[0] = 1;

    scanf("%d", &m);

    for (i = 0; i < m; i++)
    {
        for (j = 0; j < 31; j++)
        {
            d = (n[j] > 4) ? 1 : 0;
            n[j] = n[j] * 2 % 10 + c;
            c = d;
        }
    }
    c = 0;
    for (i = 30; i > 0; i--)
    {
        if (!n[i] && !c)
            continue;
        c = 1;
        printf("%d", n[i]);
    }
    printf("%d\n", n[0] - 1);


    if (m < 21)
        h(m, 1, 2, 3);


    return 0;
}
