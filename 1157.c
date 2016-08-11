#include <stdio.h>
#include <ctype.h>

int main()
{
    char letter;
    int count[26] = {0};
    int i, max_idx = 0, duplicated = 0;

    while (1)
    {
        letter = fgetc(stdin);
        if (isalpha(letter) == 0)
            break;

        letter = toupper(letter);
        count[letter - 'A'] += 1;
    }

    for (i = 1; i < 26; i++)
    {
        if (count[i] > count[max_idx])
        {
            max_idx = i;
            duplicated = 0;
        }
        else if (count[i] == count[max_idx])
        {
            duplicated = 1;
        }
    }

    if (duplicated == 1)
    {
        printf("?\n");
    }
    else
    {
        printf("%c\n", 'A' + max_idx);
    }

    return 0;
}
