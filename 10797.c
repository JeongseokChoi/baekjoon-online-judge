#include <stdio.h>

int main()
{
    int today, carNum[5], numOfViolation, i;

    scanf("%d", &today);
    for (i = 0; i < 5; i++)
        scanf("%d", &carNum[i]);

    numOfViolation = 0;
    for (i = 0; i < 5; i++)
        if (carNum[i] == today)
            numOfViolation += 1;

    printf("%d\n", numOfViolation);

    return 0;
}
