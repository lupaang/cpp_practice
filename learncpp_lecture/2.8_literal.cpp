#include <iostream>

int main()
{
    using namespace std;
    
    float pi = 3.14f;
    //int i = -1234u;

    // unsigned int n = 5u;
    // long n2 = 5L;

    int x = 012; // 숫자 앞에 0 붙이면 8진수
    int x1 = 0xF;  // 0x 붙이면 16진수
    int x2 = 0b1010; // 0b 붙이면 2진수

    cout << x << endl;
    cout << x1 << endl;
    cout << x2 << endl;

    return 0;
}