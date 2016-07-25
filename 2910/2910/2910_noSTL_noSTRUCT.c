#include <stdio.h>


int num[1000];
int freq[1000];
int size = 0;


int find(int val)
{
    int i;
    for (i = 0; i < size; i++)
        if (num[i] == val)
            return i;
    return -1;
}


int main(int argc, char* argv[])
{
    int N, C;
    scanf("%d %d", &N, &C);

    for (int i = 0; i < N; i++)
    {
        int tmp;
        scanf("%d", &tmp);

        int idx = find(tmp);
        if (idx == -1)
        {
            num[size] = tmp;
            freq[size++] = 1;
        }
        else
        {
            freq[idx]++;
        }
    }

    int max_freq = 0;
    int max_idx = 0;
    while (1)
    {
        max_freq = -1;
        max_idx = -1;

        for (int i = 0; i < size; i++)
        {
            if (freq[i] > max_freq)
            {
                max_freq = freq[i];
                max_idx = i;
            }
        }
        if (max_idx == -1)
            break;

        freq[max_idx] = -1;
        for (int i = 0; i < max_freq; i++)
            printf("%d ", num[max_idx]);
    }
    printf("\n");

    return 0;
}
