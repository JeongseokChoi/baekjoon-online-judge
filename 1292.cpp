#include <iostream>
using namespace std;


int main()
{
    int arr[1001];
    int i = 1;
    int num = 1;

    while (i < 1001)
    {
        if (i > num * (num + 1) / 2)
            num++;

        arr[i++] = num;
    }

    int from, to;

    cin >> from >> to;

    int sum = 0;
    for (int i = from; i <= to; i++)
        sum += arr[i];
    cout << sum << endl;

    return 0;
}
