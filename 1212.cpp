#include <iostream>
#include <string>
using namespace std;


char* firstOctToBin(char c)
{
    switch(c)
    {
    case '0': return "0";
    case '1': return "1";
    case '2': return "10";
    case '3': return "11";
    case '4': return "100";
    case '5': return "101";
    case '6': return "110";
    case '7': return "111";
    default : return "err";
    }

    return "err";
}


char* octToBin(char c)
{
    switch(c)
    {
    case '0': return "000";
    case '1': return "001";
    case '2': return "010";
    case '3': return "011";
    case '4': return "100";
    case '5': return "101";
    case '6': return "110";
    case '7': return "111";
    default : return "err";
    }

    return "err";
}


int main()
{
    string str;
    cin >> str;

    cout << firstOctToBin(str[0]);
    for (int i = 1; i < str.length(); i++)
        cout << octToBin(str[i]);
    cout << endl;

    return 0;
}
