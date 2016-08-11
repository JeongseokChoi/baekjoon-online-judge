#include <iostream>
using namespace std;


int func(int n)
{
    int a = n / 10;
    int b = n % 10;
    int c = (a + b) % 10;

    return b * 10 + c;
}


int main()
{
    int n;
    cin >> n;

    int first = n;

    int ans = 1;

    int new_n;

    while (true)
    {
        new_n = func(n);
        if (new_n == first)
            break;

        n = new_n;

        ans++;
    }

    cout << ans << endl;

    return 0;
}
