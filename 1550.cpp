#include <iostream>
using namespace std;

int main()
{
    int Dec_num = 0;
    char Hex_num[16];

    cin >> Hex_num;

    Dec_num = (int)strtol(Hex_num, NULL, 16);

    /* strtol(const char *nptr, char **endptr, int base)
    -> 문자열을 long 값으로 변환하는 함수(2진수, 8진수, 16진수 값을 10진수로 변환 한다.)
    nptr : NULL로 종결되는 수식을 포함하는 문자열의 포인터
    endptr : 변환이 멈춰진 문자열의 포인터
    base : 변환될 문자열의 기수(2, 8, 10, 16진수 선택)
    */

    cout << Dec_num << endl;


}
