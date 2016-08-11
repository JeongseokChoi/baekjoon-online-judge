#include <iostream>
using namespace std;


int main()
{
    int n, k;
    while (cin >> n >> k)
    {
        int answer = n;
        while (n >= k)
        {
            answer += (n / k);
            n = (n % k) + (n / k);
        }
        cout << answer << endl;
    }

    return 0;
}
