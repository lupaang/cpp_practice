#include <iostream>

using namespace std;

int add(int a, int b)
{
    return a + b;
}

void DoSomething()
{
    add(1, 2);
}

int main()
{
    DoSomething();
}