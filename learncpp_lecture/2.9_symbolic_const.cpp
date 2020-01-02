#include <iostream>
#include "my_constant.h"


void printNumber(const int my_number)
{
    using namespace std;
    cout << my_number << endl;
}

int main()
{
    using namespace std;

    printNumber(123);

    const double gravity { 9.8 }; // const 를 앞에 붙여주면 아래서 변경이 안됨 + const를 붙인 경우 반드시 값을 넣어줘서 initialization을 해줘야함
    
    //gravity = 1.2; (값을 바꿀 수 없음)

    int number;
    cin >> number;
    const int special_number(number); // 변수로 상수를 초기화 할 수 있음, 그리고 number는 변경이 되지만 special_number는 안됨
    //즉, const int n(123); 은 컴파일 단계에서 이미 값이 정해짐, 하지만 special_number는 런타임 단계에서 유저가 값을 입력해야 값이 정해짐


    constexpr int cei(123);

    const int price_per_item = 30;
    int num_item = 123;

    int price = num_item * price_per_item;


    return 0;

    double radius;
    cin >> radius; 

    double circle = 2.0 * radius * constants::pi;
}