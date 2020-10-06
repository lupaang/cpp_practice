#include <iostream>
using namespace std;

int remainder(int n)
{
    return n % 10;
}

int sum(int n)
{
    if(n < 10)
    {
        return n;
    }
    else
    {
        return (n / 10) + remainder(n);
    }
}

int cycle_check(int n)
{
        return (remainder(n) * 10) + (sum(n) % 10);
}

int cycle(int n)
{
    if (n == 0)
    {
        return 1;
    }
    else
    {
        int x = 1;
        int y = cycle_check(n);

        while(n != y)
        {
            cout << y << endl;
            y = cycle_check(y);
            x++;
        }
        return x;
    }
}

int main()
{
    int n = 67;
    int a = cycle(n);

    cout << a;

    return 0;
}