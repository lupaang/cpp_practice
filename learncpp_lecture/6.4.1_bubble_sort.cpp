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
    const int length(9);
    int array[length] = { 6, 3, 2, 9, 7, 1, 5, 4, 8 };

    for (int i = length; i > 0; --i)
    {
        for (int n = 0; n < i; ++n)
        {
            if (array[n] > array[n+1])
            {
                int temp;
                temp = array[n+1];
                array[n+1] = array[n];
                array[n] = temp;
            }
        }
    }
    printArray(array, length);
}