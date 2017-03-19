#include <iostream>
#include <list>
using namespace std;


int main()
{
    int n;
    cin >> n;

    list<int> l;

    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        l.push_back(num);
    }

    l.sort();
    cout << l.front() * l.back() << endl;

    return 0;
}
