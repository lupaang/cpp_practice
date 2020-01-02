#include <iostream>

int main()
{
    using namespace std;
    int x;

    x = 1;

    while (x < 10){
        cout << x << " it's less than 10" << endl;
        cout << ++x << endl;
    }
}