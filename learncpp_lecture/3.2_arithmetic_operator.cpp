#include <iostream>

int main()
{
    using namespace std;

    int x = 7;
    int y = 2;
    int z = x % y; // 나머지 연산자

    //cout << x / y << " " << z << endl;

    cout << float(x) / y << x / float(y) << float(x) / float(y) << endl;

    cout << 5 / -2 << endl;

    int q = x;
    z += y; // z = z + y , -=, *=, /=, %= 등 다양한 것이 있음

    return 0;
}