#include <iostream>
#include <cstddef>

using namespace std;

void doSomething(double *ptr)
{
    if (ptr != nullptr)
    {
        cout << *ptr << endl;
    }
    else
    {
        cout << "null ptr, do nothing" << endl;
    }
}

int main()
{
    double *ptr = nullptr; // modern c++
    
    doSomething(ptr);
    doSomething(nullptr);

    double d = 123.4;

    doSomething(&d);

    ptr = &d;
    doSomething(ptr);

    return 0;
}