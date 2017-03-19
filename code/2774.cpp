#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;


int main()
{
    int nCase;
    cin >> nCase;

    for (int i = 0; i < nCase; i++)
    {
        int cnt;

        char arr[11];
        cin >> arr;

        int len = strlen(arr);
        sort(arr, arr + len);

        cnt = 0;
        char prev = arr[0];
        int j = 0;
        while (j < len)
        {
            while (j < len && arr[j] == prev)
                j++;

            prev = arr[j];
            cnt++;
        }

        cout << cnt << endl;
    }

    return 0;
}
