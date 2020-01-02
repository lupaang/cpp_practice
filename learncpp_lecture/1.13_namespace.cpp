#include <iostream>


namespace MySpace1
{
    namespace InnerSpace
    {
        int innerFunc()
        {
            return 1;
        }
    }
    int doSomething(int a, int b)
    {
        return a + b;
    }
}

namespace MySpace2
{
    int doSomething(int a, int b)
    {
        return a * b;
    }
}

using namespace std;

int main()
{

    using namespace MySpace1::InnerSpace;

    innerFunc();
    
    // cout << doSomething(3,4) << endl;
    // cout << MySpace2::doSomething(3,4) << endl;

    return 0;
}


