#include <iostream>
using namespace std;


int main(int argc, char *argv[])
{
    int n;
    cin >> n;

    int tmp;

    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> tmp;
        sum += tmp;
    }

    cout << sum - (n - 1) << endl;

    return 0;
}
