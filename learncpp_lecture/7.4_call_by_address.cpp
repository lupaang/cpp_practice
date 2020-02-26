#include <iostream>
using namespace std;

void foo(int* ptr)
{
    cout << *ptr << " " << ptr << " " << &ptr << endl; // dereferencing / pointer / address of pointer
}

void arr(const int *ptr, int *arr, int length)
{
    for(int i= 0; i < length; ++i)
    {
        cout << arr[i] << endl;
    }
    
    arr[0] = 1.0; // 주소를 직접 찾아가서 바꾸는 것이기 때문에 입력된 arr의 값이 실제로 바뀌게됨

    // ptr = 1;
}


int main()
{
    int value = 5;
    cout << value << " " << &value << endl;

    int *ptr = &value;

    cout << &ptr << endl;

    foo(ptr);
    foo(&value);

    return 0;
}