#include <iostream>
#include <cstring>
using namespace std;


int main()
{
    char s[51];
    cin >> s;

    char prev = s[0];
    int height = 10;
    for (int i = 1; s[i] != '\0'; i++)
    {
        if (s[i] == prev)
            height += 5;
        else
            height += 10;
        prev = s[i];
    }
    cout << height << endl;

    return 0;
}
