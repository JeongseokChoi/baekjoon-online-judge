#include <stdio.h>


int main()
{
    int len, count = 0;
    scanf("%d", &len);
    while (len > 0)
    {
        if (len % 2 == 1)
            count++;
        len /= 2;
    }
    printf("%d\n", count);

    return 0;
}
