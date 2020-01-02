#include <iostream>

void my_function() // = void my_function(void)
{
    
}

int main()
{
    int i = 123;
    float f = 12.456f;

    void *my_void;

    my_void = (void*)&i;
    my_void = (void*)&f;

    return 0;
}