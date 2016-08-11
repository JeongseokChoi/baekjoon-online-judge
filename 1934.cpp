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
    int nCase;
    cin >> nCase;

    for (int i = 0; i < nCase; i++)
    {
        int a, b;
        cin >> a >> b;

        cout << (a * b) / gcd(a, b) << endl;
    }

    return 0;
}
