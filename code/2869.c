#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main()
{
    int a, b, v;

    scanf("%d %d %d", &a, &b, &v);

    v -= a;
    printf("%d\n", (int)ceil((double)v / (a - b)) + 1);

    return 0;
}
