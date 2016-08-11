#include <iostream>
using namespace std;


int main()
{
    int set[6] = {1, 1, 2, 2, 2, 8};
    int have[6] = {0, 0, 0, 0, 0, 0};
    int diff[6] = {0, 0, 0, 0, 0, 0};
    for (int i = 0; i < 6; i++)
    {
        cin >> have[i];
        diff[i] = set[i] - have[i];
        cout << diff[i] << " ";
    }

    return 0;
}
