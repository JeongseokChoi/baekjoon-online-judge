#include <iostream>
#include <vector>
using namespace std;


int main()
{
    vector<int> v[10];

    v[0].push_back(0);

    v[1].push_back(1);

    v[2].push_back(2);
    v[2].push_back(4);
    v[2].push_back(8);
    v[2].push_back(6);

    v[3].push_back(3);
    v[3].push_back(9);
    v[3].push_back(7);
    v[3].push_back(1);

    v[4].push_back(4);
    v[4].push_back(6);

    v[5].push_back(5);

    v[6].push_back(6);

    v[7].push_back(7);
    v[7].push_back(9);
    v[7].push_back(3);
    v[7].push_back(1);

    v[8].push_back(8);
    v[8].push_back(4);
    v[8].push_back(2);
    v[8].push_back(6);

    v[9].push_back(9);
    v[9].push_back(1);


    int nCase;
    cin >> nCase;

    for (int i = 0; i < nCase; i++)
    {
        int a, b;
        cin >> a >> b;

        if (a % 10 == 0)
            cout << 10 << endl;
        else
            cout << v[a % 10][(b - 1) % v[a % 10].size()] << endl;
    }

    return 0;
}
