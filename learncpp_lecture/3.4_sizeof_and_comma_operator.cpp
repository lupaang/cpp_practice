#include <iostream>

int getPrice(bool onSale)
{
    if (onSale) 
        return 10;
    else 
        return 100; 
}

int main()

{
    using namespace std;

    cout << sizeof(float) << endl;

    //comma operator

    int x = 3;
    int y = 10;
    //int z = (++x, ++y); -> ++x; ++y; int z = y 로 풀어쓸 수 있다.

    // int a = 1, b = 10;
    // int z;
    // z = a, b; // comma operator 는 = 보다 우선순위가 낮기 떄문에 1이 나오게 된다.

    //int z = (++x, x + y);


    //cout << x << " " << y << " " << z << endl;

    //conditional operator (arithmetic if)
    bool onSale = true;
    //int price;

    // if (onSale)
    //     price = 10;
    // else
    //     price = 100;   if 문에서는 const int 로 price를 고정할 수 없음

    const int price = (onSale == true) ? 10 : 100; // -> conditional operator

    //if 문을 정 쓰고 싶다면, 위의 함수를 이용해 const int price = getPrice(onSale); 처럼 짜야함

    cout << price << endl;

    int a = 5;

    cout << ((a % 2 == 0) ? "even" : "odd") << endl;

    return 0;
}