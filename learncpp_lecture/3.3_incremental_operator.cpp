#include <iostream>

int add(int a, int b)
{
    return a + b;
}

int main()
{
    using namespace std;

    int x = 5;
    int y = ++x; // --x 도 있음 

    int z = x--; // z = 6

    cout << y << endl;
    cout << z << endl;

    int a = 6, b = 6;

    cout << a << " " << b << endl; // 6 6
    cout << a++ << " " << b-- << endl; // 6 6 , a 를 스트림에 일단 보내고, ++로 1을 더하게 됨 
    cout << a << " " << b << endl; // 7 5, 위에 더한 것이 여기서 반영되는 것. ++ 가 앞에 붙을 때, 뒤에 붙을 때 볼 것

    cout << ++a << " " << ++b << endl;

    int q = 1;
    int r = add(q, ++q);

    cout << r << endl;

 
    return 0;
}