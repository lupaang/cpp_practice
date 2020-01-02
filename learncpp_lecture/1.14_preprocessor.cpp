#include <iostream>
#define MY_NUMBER 9
#include <algorithm>

#define LIKE_APPLE False


using namespace std;

void doSomething() 
{
    #ifdef LIKE_APPLE
    cout << "APPLE" << endl;
    #endif

    #ifndef LIKE_APPLE
    cout << "NO APPLE" << endl;
    #endif
}


int main()
{
    doSomething();
    cout << MY_NUMBER << endl;
    cout << max(3,2) << endl;

    return 0;
}