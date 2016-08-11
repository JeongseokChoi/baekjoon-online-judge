#include <iostream>
using namespace std;


int gcd(int p, int q)
{
    if (q == 0)
        return p;

    return gcd(q, p % q);
}


int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    int A, B;

    B = b * d;
    A = a * d + c * b;

    if (gcd(A, B) == 1)
        cout << A << " " << B << endl;
    else
        cout << A / gcd(A, B) << " " << B / gcd(A, B) << endl;

    return 0;
}
