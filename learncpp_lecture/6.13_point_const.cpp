#include <iostream>
using namespace std;

int main()
{
    int value1 = 5;
    const int *ptr = &value1; 
    // const int * 의 경우, 포인터 주소값을 안바꾸겠다는 것이 아니라, 가리키고 있는 값을 변경하지 않겠다는 것

    cout << ptr << endl;

    int value2 = 6;
    ptr = &value2;

    cout << &value1 << endl;
    cout << &value2 << endl;
    cout << ptr << endl;
    cout << *ptr << endl;
}