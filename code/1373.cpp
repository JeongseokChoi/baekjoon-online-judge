#include <iostream>
#include <vector>
using namespace std;


int main()
{
    vector<char> numVec, tmpVec;

    char tmp;
    while (cin >> tmp)
        numVec.push_back(tmp);

    while (!numVec.empty())
    {
        int val = 0;
        char a[3] = { -1, -1, -1 };
        for (int i = 0; (i < 3) && !numVec.empty(); i++)
        {
            a[i] = numVec.back();
            numVec.pop_back();
        }
        val += (a[0] == '1')? 1 : 0;
        val += (a[1] == '1')? 2 : 0;
        val += (a[2] == '1')? 4 : 0;

        tmpVec.push_back((char)(val + '0'));
    }

    while (!tmpVec.empty())
    {
        cout << tmpVec.back();
        tmpVec.pop_back();
    }
    cout << endl;

    return 0;
}
