#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;


double permutation(int a, int b)
{
    double res = 1.0;

    for (int i = 0; i < b; i++)
        res *= a--;

    return res;
}


double combination(int a, int b)
{
    double res = permutation(a, b);

    while (b > 1)
        res /= b--;

    return res;
}


int main()
{
    int n, a, b;

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a >> b;
        printf("%.0f\n", combination(b, a));
    }

    return 0;
}
