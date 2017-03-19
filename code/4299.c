#include <stdio.h>
#include <stdlib.h>


int main()
{
    int sum, diff, double_x, double_y, x, y;

    scanf("%d %d", &sum, &diff);

    double_x = sum + diff;
    double_y = sum - diff;

    if (double_x < 0 || double_y < 0 || double_x % 2 == 1 || double_y % 2 == 1)
    {
        printf("-1\n");
        return 1;
    }

    x = (double_x > double_y)? double_x / 2 : double_y / 2;
    y = (double_x > double_y)? double_y / 2 : double_x / 2;

    printf("%d %d\n", x, y);

    return 0;
}
