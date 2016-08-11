#include <stdio.h>

int main()
{
    int N, P;
    int numLog[100], curr, occurBefore, i;
    int isFound = 0;

    scanf("%d %d", &N, &P);

    numLog[0] = N;
    curr = 1;
    while (1)
    {
        numLog[curr] = (numLog[curr - 1] * N) % P;
        for (i = curr - 1; i >= 0; i--)
        {
            if (numLog[curr] == numLog[i])
            {
                isFound = 1;
                occurBefore = i;
                break;
            }
        }
        if (isFound)
            break;

        ++curr;
    }

    printf("%d\n", curr - occurBefore);

    return 0;
}
