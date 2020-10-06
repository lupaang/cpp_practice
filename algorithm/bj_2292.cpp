#include <iostream>
using namespace std;

const int six = 6;

int main()
{
    int x;
    x = 37;

    int y = 7;

    for (int i = 1; i <= x; i++)
    {
        if (x == 1)
        {
            cout << 0;
            break;
        }
        else if (x <= y)
        {
            cout << i;
            break;
        }
        else
        {
            y += ((i+1) * six);
            continue;
        }
    }
    return 0;
}