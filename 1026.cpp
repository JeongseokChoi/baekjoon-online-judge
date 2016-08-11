#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main()
{
    int n;
    cin >> n;

    vector<int> a, b;

    int tmp;
    for (int i = 0; i < n; i++)
    {
        cin >> tmp;
        a.push_back(tmp);
    }
    for (int i = 0; i < n; i++)
    {
        cin >> tmp;
        b.push_back(tmp);
    }

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    reverse(b.begin(), b.end());

    int sum = 0;
    for (int i = 0; i < n; i++)
        sum += a[i] * b[i];

    cout << sum << endl;

    return 0;
}
