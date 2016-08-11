#include <iostream>
using namespace std;


int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    int A, B;
    cin >> A >> B;

    int min_burger = a;
    if (b < min_burger)
        min_burger = b;
    if (c < min_burger)
        min_burger = c;

    int min_drink = (A < B) ? A : B;

    cout << min_burger + min_drink - 50 << endl;

    return 0;
}
