#include <iostream>
using namespace std;


int main()
{
    char arr[8][8];
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            cin >> arr[i][j];
        }
    }

    int answer = 0;
    for (int i = 0; i < 8; i += 2)
    {
        for (int j = 0; j < 8; j += 2)
        {
            if (arr[i][j] == 'F')
                answer += 1;
        }
    }
    for (int i = 1; i < 8; i += 2)
    {
        for (int j = 1; j < 8; j += 2)
        {
            if (arr[i][j] == 'F')
                answer += 1;
        }
    }
    cout << answer << endl;

    return 0;
}
