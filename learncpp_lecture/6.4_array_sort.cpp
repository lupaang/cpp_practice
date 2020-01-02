#include <iostream>

using namespace std;

void printArray(int array[], int length)
{
    for(int index = 0; index < length; ++index)
    {
        cout << array[index] << endl;
    }
}

int main()
{
    const int length = 5;

    int array[length] = {3,5,1,4,2};
    
    printArray(array, length);

    for(int m = 0; m < length; ++m)
    {
        for(int n = m; n < length; ++n)
        {
            if(array[m] > array[n])
            {
                int x;
                x = array[m];
                array[m] = array[n];
                array[n] = x;
            }
        }
    }

    printArray(array, length);

    return 0;
}