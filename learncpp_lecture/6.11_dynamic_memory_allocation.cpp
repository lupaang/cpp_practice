#include <iostream>
using namespace std;


int main()
{
    /* int *ptr = new (nothrow) int;
    *ptr = 7;

    cout << ptr << endl;
    cout << *ptr << endl;

    cout << "after delete" << endl;
    if (ptr != nullptr)
    {
        cout << ptr << endl;
        cout << *ptr << endl;
    }

    delete ptr;
    ptr = nullptr;
    

    return 0;
    */

   //memory leak

   while (true)
   {
       int *ptr = new int;
       cout << ptr << endl;

       delete ptr;
   }
   
}