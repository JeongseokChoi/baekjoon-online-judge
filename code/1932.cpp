#include <iostream>
using namespace std;


int arr[500][500];


int main()
{
    int size;
    cin >> size;

    for (int i = 0; i < size; i++)
        for (int j = 0; j <= i; j++)
            cin >> arr[i][j];

    for (int i = size - 1; i > 0; i--)
    {
        for (int j = 0; j < size; j++)
        {
            if (arr[i][j] > arr[i][j + 1])
                arr[i - 1][j] += arr[i][j];
            else
                arr[i - 1][j] += arr[i][j + 1];
        }
    }

    cout << arr[0][0] << endl;

    return 0;
}
