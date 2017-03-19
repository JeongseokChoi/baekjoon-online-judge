#include <iostream>
using namespace std;


int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    if (a + b + c == 180) {
        if (a == b && b == c) {
            cout << "Equilateral" << endl;
        }
        else if  ((a == b && b != c) || (b == c && c != a) || (c == a) && (a != b)) {
            cout << "Isosceles" << endl;
        }
        else {
            cout << "Scalene" << endl;
        }
    }
    else {
        cout << "Error" << endl;
    }

    return 0;
}
