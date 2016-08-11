#include <iostream>
#include <iomanip>
using std::cout;
using std::cin;
using std::endl;
using std::setprecision;

int main()
{
    int a, b;

    cin >> a >> b;
    cout << setprecision(15) << (double)a / b << endl;

    return 0;
}
