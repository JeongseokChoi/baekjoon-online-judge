#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int my_str_cmp(const void *a, const void *b)
{
    int a_len = strlen(a);
    int b_len = strlen(b);
    if (a_len == b_len)
    {
        return strcmp(a, b);
    }
    else
    {
        return a_len - b_len;
    }
}


char word[20000][51];


int main()
{
    int number_of_words, i, j;

    scanf("%d", &number_of_words);
    for (i = 0; i < number_of_words; i++)
        scanf("%s", word[i]);

    qsort(word, number_of_words, 51, my_str_cmp);

    puts(word[0]);
    for (i = 1; i < number_of_words; i++)
        if (strcmp(word[i], word[i - 1]))
            puts(word[i]);

    return 0;
}
