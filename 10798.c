#include <stdio.h>

int main()
{
    char board[5][15];
    int i, j;

    for (i = 0; i < 5; i++)
        for (j = 0; j < 15; j++)
            board[i][j] = '\0';

    for (i = 0; i < 5; i++)
        scanf("%s", board[i]);

    for (j = 0; j < 15; j++)
        for (i = 0; i < 5; i++)
            if (board[i][j] != '\0')
                printf("%c", board[i][j]);

    return 0;
}
