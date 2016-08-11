#include <stdio.h>
#include <stdlib.h>
#include <string.h>


enum direction {UP, DOWN, LEFT, RIGHT} di;


int main(int argc, char *argv[])
{
    int cur_x = 0, cur_y = 0;
    int min_x = 0, min_y = 0;
    int max_x = 0, max_y = 0;
    char command[501];
    int command_len;

    int n, i, j;

    scanf("%d", &n);

    di = UP;
    for (i = 0; i < n; i++)
    {
        scanf("%s", command);
        command_len = strlen(command);

        cur_x = 0;
        cur_y = 0;
        min_x = 0;
        max_x = 0;
        min_y = 0;
        max_y = 0;

        for (j = 0; j < command_len; j++)
        {
            switch (command[j])
            {
            case 'F':
                switch (di)
                {
                case UP:
                    cur_y += 1;
                    break;
                case DOWN:
                    cur_y -= 1;
                    break;
                case LEFT:
                    cur_x -= 1;
                    break;
                case RIGHT:
                    cur_x += 1;
                    break;
                }
                break;
            case 'B':
                switch (di)
                {
                case UP:
                    cur_y -= 1;
                    break;
                case DOWN:
                    cur_y += 1;
                    break;
                case LEFT:
                    cur_x += 1;
                    break;
                case RIGHT:
                    cur_x -= 1;
                    break;
                }
                break;
            case 'L':
                switch (di)
                {
                case UP:
                    di = LEFT;
                    break;
                case DOWN:
                    di = RIGHT;
                    break;
                case LEFT:
                    di = DOWN;
                    break;
                case RIGHT:
                    di = UP;
                    break;
                }
                break;
            case 'R':
                switch (di)
                {
                case UP:
                    di = RIGHT;
                    break;
                case DOWN:
                    di = LEFT;
                    break;
                case LEFT:
                    di = UP;
                    break;
                case RIGHT:
                    di = DOWN;
                    break;
                }
                break;
            }
            if (cur_x > max_x)
                max_x = cur_x;
            if (cur_x < min_x)
                min_x = cur_x;
            if (cur_y > max_y)
                max_y = cur_y;
            if (cur_y < min_y)
                min_y = cur_y;
        }
        printf("%d\n", (max_x - min_x) * (max_y - min_y));
    }

    return 0;
}
