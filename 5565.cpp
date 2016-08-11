#include <iostream>
using namespace std;

int main()
{
    int total;
    int tmp;

    cin >> total;
    for (int i = 0; i < 9; i++)
    {
        cin >> tmp;
        total -= tmp;
    }
    cout << total << endl;

    return 0;
}
