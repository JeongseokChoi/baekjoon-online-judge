#include <iostream>
using namespace std;

int main()
{
    int nCase;
    cin >> nCase;

    for (int i = 0; i < nCase; i++)
    {
        int n;
        cin >> n;

        int sum = 0;
        int tmp;
        for (int j = 0; j < n; j++)
        {
            cin >> tmp;
            sum += tmp;
        }
        cout << sum << endl;
    }

    return 0;
}
