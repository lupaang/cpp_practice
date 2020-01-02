#include <iostream>
using namespace std;

struct something{
    int v;
    float f;
};

struct other{
    something sth;
};


int main()
{
     int value = 5;

     int *ptr = nullptr;
     ptr = &value;

     int &ref = value; // 참조는 value라는 변수의 별명처럼 사용 가능
     //int &ref 로 초기화는 못함, int &ref = 104 처럼 literal은 메모리주소를 갖지 못하고 변수를 넣어줘야함(l-value)

     cout << ref << endl;
    
     ref = 10; // *ptr = 10과 똑같이 작동

     cout << value << " " << ref << endl;

     cout << &value << " " << &ref << " " << ptr << " " << &ptr << endl; // ref 와 value의 메모리 주소도 같다

     const int y = 8;
     const int &ref2 = y; // 그냥 int &ref2 = y는 안됨, ref2 에서 y를 바꿔줄수도 있으므로 에러를 띄움


    other ot;

    int &v1 = ot.sth.v;
    v1 = 1;

     return 0;
}