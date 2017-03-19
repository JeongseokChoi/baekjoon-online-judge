#include <iostream>
using namespace std;


int main()
{
    int X;
    cin >> X;

    int tmp;
    for (tmp = 1; X - tmp > 0; tmp++)
        X -= tmp;

    if (tmp % 2 == 0)  // Even number
        cout << X << "/" << (tmp + 1) - X << endl;
    else  // Odd number
        cout << (tmp + 1) - X << "/" << X << endl;

    return 0;
}
