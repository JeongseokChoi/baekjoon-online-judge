#include <stdio.h>

int main()
{
    int n_case;
    int s, n, q, p;
    int i;
    scanf("%d", &n_case);
    while (n_case--)
    {
        scanf("%d", &s);
        scanf("%d", &n);
        for (i = 0; i < n; i++)
        {
            scanf("%d %d", &q, &p);
            s += q * p;
        }
        printf("%d\n", s);
    }

    return 0;
}
