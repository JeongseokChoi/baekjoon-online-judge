#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main()
{
    vector<int> v;
    int num;
    int n;

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> num;
        v.push_back(num);
    }

    sort(v.begin(), v.end());

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> num;
        cout << dec << binary_search(v.begin(), v.end(), num) << endl;
    }

    return 0;
}
