#include <iostream>
using namespace std;


int main()
{
    int sum = 0;

    int arr[9];
    for (int i = 0; i < 9; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }

    int partialSum = 0;
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; (j != i) && (j < 9); j++)
        {
            partialSum = arr[i] + arr[j];
            if (partialSum == sum - 100)
            {
                arr[i] = -1;
                arr[j] = -1;
            }
        }
    }

    for (int i = 0; i < 9; i++)
        if (arr[i] != -1)
            cout << arr[i] << endl;

    return 0;
}
