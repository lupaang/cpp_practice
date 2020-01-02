#include <iostream>
#include <cmath>

int main()
{
    using namespace std;

    // while(true)
    // {

    // int x,y;

    // cin >> x >> y >>;
    // cout << "Your input is " << x << " " << y << endl;

    // if (x == y)
    //     cout << "equal" << endl;
    // if (x != y)
    //     cout << "not equal" << endl;
    // if (x > y)
    //     cout << "x is bigger than y" << endl;
    // if (x < y)
    //     cout << "x is smaller than y" << endl;
    // if (x >= y)
    //     cout << "x is greater than y or equal" << endl;
    // if (x <= y)
    //     cout << "x is less than y or equal" << endl;

    // }

    double d1(100 - 99.99); //0.01
    double d2(10 - 9.99); //0.01

    cout << d1 << endl;
    cout << d2 << endl;

    cout << std::abs(d1 - d2) << endl;

    const double epsilon = 1e-10; // 오차 범위를 지정해주는 것

    if(std::abs(d1 - d2) < epsilon)
    cout << "approx equal"<< endl;
    else
    cout << "not equal" << endl;


    if (d1 == d2)
    cout << "equal" << endl;
    else
    {
        cout << "not equal" << endl;
        if (d1 > d2) 
        cout << "d1 > d2" << endl;
        if (d2 > d1)
        cout << "d2 > d1" << endl; 
    }

    return 0;

}