#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;


int main()
{
    char buf[16];

    cin >> buf;

    sort(&buf[0], &buf[strlen(buf)]);
    reverse(&buf[0], &buf[strlen(buf)]);

    cout << buf << endl;

    return 0;
}
