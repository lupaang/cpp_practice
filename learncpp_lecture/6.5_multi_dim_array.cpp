#include <iostream>
using namespace std;

int main()
{
    const int num_rows = 3;
    const int num_columns = 3;

    for (int row = 0; row < num_rows; ++row)
    {
        for (int column = 0; column < num_columns; ++column)
        {
            cout << "[" << row << "]" << "[" << column << "]" << "\t";
        }
        cout << endl;
    }

    int array[num_rows][num_columns] = 
    {
        {1,2,3},
        {3,4,5},
        {5,6,7},
    }; 
    // row_major <-> column_major
    // array[0][0] = 1; 이렇게 무식하게 초기화도 가능

    for (int row = 0; row < num_rows; row++)
    {
        for (int col = 0; col < num_columns; col++)
        {
            cout << &array[row][col] << "\t"; //&를 붙이면 메모리 주소 알 수 있음
        }
        cout << endl;
    }

    return 0;
}