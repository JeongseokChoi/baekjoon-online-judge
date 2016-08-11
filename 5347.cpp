#include <iostream>
using namespace std;


int main()
{
    int nCase;
    cin >> nCase;
    while (nCase--)
    {
        long long int a, b, gcd;
        long long int A, B, R = -1;
        cin >> A >> B;
        a = A;
        b = B;
        while (R != 0)
        {
            R = A % B;
            A = B;
            B = R;
        }
        gcd = A;
        cout << a * b / A << endl;
    }

    return 0;
}
