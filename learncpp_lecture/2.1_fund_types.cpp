#include <iostream>
#include <bitset>

int main()
{
    using namespace std;

    int i = 3;
    int j = -1;

    bool bValue = true;

    cout << (bValue ? 1 : 0) <<endl;

    char cValue = 65;
    char chValue = 'A';

    cout << cValue << endl;
    cout << (int)chValue << endl;

    cout << bValue << endl;

    float fValue = 3.141592f;
    double dValue = 3.141592;

    auto aValue = 3.141592f;

    cout << fValue <<endl;
    cout << dValue <<endl;

    cout << sizeof(fValue) << endl;
    cout << sizeof(dValue) << endl;

    cout << aValue << endl;

    cout << sizeof(bool) << endl;

    int a = 123; //copy initialization
    //int b(123); //direct initialization
    //int c { 123 }; //uniform intialization

    int d = (int)3.141592;

    int k = 1, l = 2, m = 3 ;
}
