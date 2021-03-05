#include <iostream>

using namespace std;

struct Stack
{
    int data[1000];
    int size;

    Stack()
    {
        size = 0;
    }
    
    void push(int n)
    {
        data[size] = n;
        size += 1;
    }

    int pop()
    {
        if (size == 0)
        {
            return -1;
        }
        else
        {
            size -= 1;
            return data[size];
        }
        
    }

    bool empty()
    {
        return (size == 0) ? true : false;
    }

    int top()
    {
        return (size == 0) ? -1 : data[size - 1];
    }
};

int main(void)
{
    ios :: sync_with_stdio(false);

    int N;
    Stack st;
}