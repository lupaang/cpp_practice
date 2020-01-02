#include <iostream>
#include <bitset>

using namespace std;

int main()
{
    // << left shift
    // >> right shift

    // ~ (bitwise not), & (bitwise and), |(bitwise or), ^(bitwise xor)

    unsigned int a = 3;
    unsigned int b = 86; 

    cout << std::bitset<4>(a) << endl;
    cout << std::bitset<4>(b) << endl;

    unsigned int c = a << 1;

    cout << std::bitset<4>(c) << " " << (a << 1) << endl; 
    cout << std::bitset<4>(a << 3) << " " << (a << 3) << endl; 
    // left shift 는 1들을 왼쪽으로 미는 것, 오른쪽에 비는 칸은 0으로 채워줌. 즉 십진수에서는 2^x(뒤에있는 숫자)배를 하는 것과 같음

    unsigned int d = 1024;

    cout << std::bitset<16>(d >> 1) << " " << (d >> 1) << endl;
    cout << std::bitset<16>(d >> 2) << " " << (d >> 2) << endl;

    //bitwise not (logical not 과 의미 구분할 것..) -> 0을 1로, 1을 0으로
    cout << std::bitset<16>(~d) << " " << (~d) << endl;

    //

    unsigned int e = 0b1100; 
    unsigned int f = 0b0110;
    cout << std::bitset<4>(e&f) << " " << std::bitset<4>(e|f) << " " << std::bitset<4>(e ^ f) << endl;

    //e &= f 등으로 줄여쓸수도 있다

    cout << std::bitset<4>(0b0110 >> 2) << " " << (5 | 12) << " " << (5 & 12) << " " << ( 5 ^ 12) << endl; 



    return 0;

}