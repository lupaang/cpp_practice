#include <iostream>
using namespace std;

const int length = 9;

int array[length];

int getMax()
{
    int max = 0;
    int idx = 0;
    
    for(int i = 0; i < length; i++)
    {
        if(max < array[i])
        {
            max = array[i];
            idx = i;
        }
    }
    return idx;
}

int main(void)
{   
    for(int i = 0; i < length; i++)
    {
        cin >> array[i];
    }
    
    int idx = getMax();

    cout << array[idx] << endl;
    cout << idx + 1<< endl;
}