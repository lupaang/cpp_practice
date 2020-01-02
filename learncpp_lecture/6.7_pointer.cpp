#include <iostream>
using namespace std;

// 포인터는 메모리 주소를 담는 '변수'이다

int* doSomething(int* ptr_a)  // return으로 포인터를 줄 수도 있고, 파라미터로 포인터를 넣을수도 있다
{
    return nullptr;
}

struct Something{
    int a,b,c,d; //4 x 4 = 16byte
};

int main()
{
    int x = 5;
    double d = 123.0; 
    cout << x << endl;
    cout << &x << endl; // & -> address-of operator
    cout << (long)&x << endl;

    //de-reference operator (*)

    cout << *(&x) << endl;

    int* ptr_x = &x; 
    double* ptr_d;
    // 포인터에 타입을 지정해줄 수 있다. 즉 ptr_x 라는 포인터는 int 값을 갖게 된다.
    //해당 포인터에 어떤 데이터 타입이 들어가는지 미리 지정해 주는 것

    cout << typeid(ptr_x).name() << endl; // Pi -> pointer to integer
    cout << sizeof(x) << " " << sizeof(ptr_x) << endl;
    cout << sizeof(d) << " " << sizeof(ptr_d) << endl; 
    //여긴 64bit라 같지만, 32bit 기준 포인터의 데이터 타입은 double이지만 (8byte) 포인터 자체는 주소이므로(4byte)만 가지게 됨

    Something ss;

    Something * ptr_s;
    cout << sizeof(ss) << " " << sizeof(ptr_s); //Struct 사이즈는 16이지만, struct의 포인터는 8임

    return 0;
}