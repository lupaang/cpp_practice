#include <iostream>

using namespace std;

int main()
{
    int N;

    cin >> N;
    int arr[1000]; 

    for (int i = 0; i < N; i++)
    {
        int input;
        cin >> input;
        arr[i] = input;
        
        for (int j = 0; j < i; j++)
        {
            int temp;
            if (arr[i] < arr[j])
            {
                temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
            else
            {
                continue;
            }
        }
        
    }

    for (int i = 0; i < N; i++)
    {
        cout << arr[i] << "\n";
    }
}