#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;


bool isIn(double x, double y, double cX, double cY, double cR)
{
    double distance = sqrt(pow(abs(x - cX), 2) + pow(abs(y - cY), 2));
    return distance < cR ? true : false;
}


int main()
{
    int nCase;
    cin >> nCase;
    while (nCase--)
    {
        double srcX, srcY, dstX, dstY;
        cin >> srcX >> srcY >> dstX >> dstY;

        int nSystem;
        cin >> nSystem;
        bool* system[2] = { new bool[nSystem], new bool[nSystem] };
        for (int i = 0; i < nSystem; i++)
        {
            system[0][i] = false;
            system[1][i] = false;
        }
        for (int i = 0; i < nSystem; i++)
        {
            double x, y, r;
            cin >> x >> y >> r;
            if (isIn(srcX, srcY, x, y, r))
                system[0][i] = true;
            if (isIn(dstX, dstY, x, y, r))
                system[1][i] = true;
        }

        int answer = 0;
        for (int i = 0; i < nSystem; i++)
        {
            if (system[0][i] == true && system[1][i] == false)
                answer += 1;
            else if (system[0][i] == false && system[1][i] == true)
                answer += 1;
        }

        cout << answer << endl;
    }

    return 0;
}
