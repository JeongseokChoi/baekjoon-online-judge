#include <iostream>
#include <cstdio>
using namespace std;


int main()
{
    int nCase;
    cin >> nCase;

    while (nCase--)
    {
        int arr[5];
        for (int i = 0; i < 5; i++)
            cin >> arr[i];

        double price[] = {350.34, 230.90, 190.55, 125.30, 180.90};
        double sum = 0.0;
        for (int i = 0; i < 5; i++)
            sum += price[i] * arr[i];

        printf("$%.02f\n", sum);
    }

    return 0;
}
