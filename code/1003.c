#include <stdio.h>
#include <stdlib.h>


int fibo(int n)
{
    int a = 0, b = 1, c = 1;

    for (int i = 0; i < n; i++)
    {
        a = b;
        b = c;
        c = a + b;
    }

    return a;
}


int main(int argc, char *argv[])
{
    int T, N;

    scanf("%d", &T);
    while (T--)
    {
        scanf("%d", &N);
        if (N == 0)
            printf("1 0\n");
        else if (N == 1)
            printf("0 1\n");
        else
            printf("%d %d\n", fibo(N - 1), fibo(N));
    }
}
