#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
    char seq[4];
    int A, B, C;
    int X, Y, Z;

    scanf("%d %d %d", &X, &Y, &Z);
    if (X < Y && X < Z)
    {
        A = X;
        if (Y < Z)
        {
            B = Y;
            C = Z;
        }
        else
        {
            B = Z;
            C = Y;
        }
    }
    else if (Y < X && Y < Z)
    {
        A = Y;
        if (X < Z)
        {
            B = X;
            C = Z;
        }
        else
        {
            B = Z;
            C = X;
        }
    }
    else if (Z < Y && Z < X)
    {
        A = Z;
        if (X < Y)
        {
            B = X;
            C = Y;
        }
        else
        {
            B = Y;
            C = X;
        }
    }

    scanf("%s", seq);
    switch (seq[0])
    {
    case 'A': printf("%d ", A); break;
    case 'B': printf("%d ", B); break;
    case 'C': printf("%d ", C); break;
    }
    switch (seq[1])
    {
    case 'A': printf("%d ", A); break;
    case 'B': printf("%d ", B); break;
    case 'C': printf("%d ", C); break;
    }
    switch (seq[2])
    {
    case 'A': printf("%d\n", A); break;
    case 'B': printf("%d\n", B); break;
    case 'C': printf("%d\n", C); break;
    }


    return 0;
}
