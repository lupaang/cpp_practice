
#include <iostream>
using namespace std;

int main()
{
    int n;
    n = 679;
    
    int five_n;
    five_n = (n / 5);
    
    if(n < 3)
        cout << -1;
    else if(n % 5 == 0)
    {
        cout << (n / 5);
    }
    else
    {
        while (five_n >= 0)
        {
            if ((n - (five_n * 5)) % 3 == 0)
            {
                cout << (five_n + ((n - (five_n * 5))/3));
                break;
            }
            else
            {
                --five_n;
                if(five_n < 0)
                    cout << -1;
            }
        }
    }
    return 0;
}