#include <iostream>
#include <cstring>
using namespace std;

 
typedef char block_t;


int main()
{
    block_t block[100][100];
    memset(block, 0, 100 * 100 * sizeof(block_t));

    int lbx, lby, rtx, rty;  // l:Left, r:Right, b:Bottom, t:Top
    for (int i = 0; i < 4; i++)
    {
        cin >> lbx >> lby >> rtx >> rty;

        for (int x = lbx; x < rtx; x++)
        {
            for (int y = lby; y < rty; y++)
            {
                block[x][y] = 1;
            }
        }
    }

    int area = 0;
    for (int i = 0; i < 100; i++)
    {
        for (int j = 0; j < 100; j++)
        {
            if (block[i][j] == 1)
            {
                area += 1;
            }
        }
    }
    cout << area << endl;

    return 0;
}
