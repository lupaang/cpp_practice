#include <iostream>

using namespace std;

// int main()
// {
//     int array[5] = {9,7,5,3,1};

//     cout << array[0] << " " << array[1] << endl;
//     cout << array << endl;
//     cout << &(array[0]) << endl;

//     cout << *array << endl;

//     // char name[] = "jackjack";

//     // cout << name << endl;
//     // cout << *name << endl;

//     int *ptr = array;

//     cout << ptr << endl;
//     cout << *ptr << endl;
// }

// void printArray(int *array) (결국 array는 포인터로 보내지는 것과 같다)
// void printArray(int array[])
// {
//     cout << sizeof(array) << endl;
//     cout << *array << endl;

//     *array = 100;  
// }

// int main()
// {
//     int array[5] = {9,7,5,3,1};

//     cout << sizeof(array) << endl;

//     int *ptr = array;
//     cout << sizeof(ptr) << endl; 
//     cout << *ptr << " " << *(ptr + 1) << endl;

//     printArray(array);

//     cout << array[0] << " " << *array << endl;
// }


struct MyStruct {
    int array[5] = {9,7,5,3,1};
};

void doSomething(MyStruct ms)
{
    cout << sizeof(ms.array) << endl;
}

int main()
{
    MyStruct ms;
    cout << ms.array[0] << endl;

    doSomething(ms); 
}

