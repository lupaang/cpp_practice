#include <iostream>
#include <cmath>
#include <limits>

int main()
{
    using namespace std;

    short s = 1;
    int a = 1 ;
    long l = 1;
    long long ll = 1;

    cout << std::pow(2, sizeof(short)*8 - 1) - 1<< endl; // 2byte -> 2 x 8 bits -> 16 bits -> 2^16 , 
                                                        // 부호 표현으로 비트 하나 빠지고, 0 표현으로 하나를 빼면 표현할 수 있는 숫자는 32767개

    cout << std::numeric_limits<short>::max() << endl;
    cout << std::numeric_limits<short>::min() << endl;
    cout << std::numeric_limits<short>::lowest() << endl; // 정수형에서는 min, lowest가 같다

    s = 32767;
    s = s + 1; // overflow

    s = std::numeric_limits<short>::min();
    s = s - 1;

    cout << s << endl;

    cout << sizeof(int) << endl;
    cout << sizeof(long) << endl;
    cout << sizeof(long long) << endl;


    unsigned int i = -1;

    cout << i << endl;


    cout << (float)22/4 << endl;

    return 0;
}