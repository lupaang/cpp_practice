#include <iostream>

bool isEqual(int x, int y)
{
    bool result = (x == y);

    return result;
}

int main()
{
    using namespace std;

    bool b1 = true; // copy initialization
    bool b2(false); // direct init
    // bool b3{ true }; // uniform init
    // b3 = false;
    b2 = false;

    cout << std::boolalpha; // <-> std::notalpha

    cout << b2 << endl;
    cout << b1 << endl;
    cout << !b2 << endl; // ! -> not operator

    cout << (true && true) << endl; // && and operator <-> || or operator
    cout << (true && false) << endl;
    cout << (false && true) << endl;
    cout << (false && false) << endl; 

    // if(true)
    // cout << "this is true" << endl;

    // if(false)
    // cout << "this is true" << endl;

    // if(false)
    //{
    // cout << "this is true" << endl;
    // cout << "this is true second line" << endl;
    //}
    // else
    // cout << "this is false" << endl;    

    // cout << isEqual(2,2) << endl;
    // cout << isEqual(3,4) << endl;

    // if (5)
    // cout << "5 is true" << endl;
    // else
    // cout << "5 is false" << endl; // if에서 0이 아니면 다른 것은 모두 true 로 인식함

    // bool b;
    
    // cin >> b;
    // cout << "Your input : " << b << endl; // boolean에 문자 'false'를 넣는다고 false가 되는 것이 아니다. boolean은 0이 아닌 것과 0으로 구분됨. 즉 '0'이 아니면 true임... 'true'를 넣으면 true가 return('true'는 0이 아니므로)

    return 0;
} 