#include <iostream>
using namespace std;

/*
int main()
{
    int v1 = 7;
    int *ptr1 = &v1;

    cout << uintptr_t(ptr1) << endl;
    cout << uintptr_t(ptr1 + 1) << endl;

    double v2 = 7.0;
    double *ptr2 = &v2;

    cout << uintptr_t(ptr2) << endl;
    cout << uintptr_t(ptr2 + 1) << endl;
}
*/

/* int main()
{
    int array[] = {1,3,5,7,9};
    cout << array[0] << endl;
    cout << uintptr_t(&array[0]) << endl;
    cout << array[1] << endl;
    cout << uintptr_t(&array[1]) << endl;
    
    return 0;
}

*/

/* int main()
{
    int array[] = {9,7,5,3,1};
    int *ptr = array;

    for (int i = 0; i < 5; i++)
    {
        cout << array[i] << " " << uintptr_t(&array[i]) << endl;
        cout << *(ptr+i) << " " << uintptr_t(ptr + i) << endl;
    }
    return 0;
}
*/

int main()
{
    char name[] = "Jack jack";
    const int n_name = sizeof(name)/sizeof(char);

    char *ptr = name;

    for (int i = 0; i < n_name; i++)
    {
        cout <<  *(ptr + i);
    }
}