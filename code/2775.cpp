#include <iostream>
#include <cstring>
using namespace std;


int main()
{
    int arr[15][15];
    memset(arr, 0x00, 15 * 15 * sizeof(int));
    for (int i = 0; i < 15; i++)
        arr[0][i] = i;
    for (int i = 1; i < 15; i++)
        for (int j = 0; j < 15; j++)
            for (int k = 0; k <= j; k++)
                arr[i][j] += arr[i - 1][k];

    int nCase;
    cin >> nCase;
    while (nCase--)
    {
        int k, n;
        cin >> k >> n;
        cout << arr[k][n] << endl;
    }

    return 0;
}
