#include <iostream>
using namespace std;


int main()
{
    int nCase;
    cin >> nCase;
    while (nCase--)
    {
        int n, num, min = -1, max = -1;

        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> num;
            if (min == -1 && max == -1)
            {
                min = num;
                max = num;
            }
            if (num < min)
                min = num;
            if (num > max)
                max = num;
        }

        cout << (max - min) * 2 << endl;
    }

    return 0;
}
