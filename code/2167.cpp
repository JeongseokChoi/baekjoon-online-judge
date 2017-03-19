#include <iostream>
using namespace std;


int main()
{
    int arr[300][300];

    int row, col;
    cin >> row >> col;

    for (int i = 0; i < row; i++)
        for (int j = 0; j < col; j++)
            cin >> arr[i][j];

    int nCase;
    cin >> nCase;

    for (int i = 0; i < nCase; i++)
    {
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;

        int sum = 0;
        for (int s = x1 - 1; s <= x2 - 1; s++)
            for (int t = y1 - 1; t <= y2 - 1; t++)
                sum += arr[s][t];

        cout << sum << endl;
    }

    return 0;
}
