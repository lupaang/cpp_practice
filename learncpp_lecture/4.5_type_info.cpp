#include <iostream>
#include <typeinfo>
#include <iomanip>

int main()
{
    using namespace std;

    int a = 123;

    cout << typeid(4.0).name() << endl;
    cout << typeid(a ).name() << endl;

    // numeric promotion
    float x1 = 1.0f;
    double d1 = x1;

    //numeric conversion
    // double d2 = 3;
    // short s2 = 2;

    int i = 30000;
    char c = i;

    double d2 = 0.123456789;
    float f2 = d2;

    float f3 = 3.14f;
    int i3 = f3; // i3 = 3 이됨. '버림'임


    
    cout << static_cast<int>(c) << endl;
    cout << std::setprecision(12) << f2 << endl;

    //unsigned에서 음수를 만들면?
    cout << 5u - 10 << endl;

    //자료형 간에 우선순위 낮은 것 부터 나열하면 int, unsigned int, long, unsigned long,  
    //long long, unsigned long long, float, double, 

    return 0; 
}