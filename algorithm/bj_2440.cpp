#include <iostream>

using namespace std;

void print_star(int a){
    for(int i = a; i >=1 ; i--)
    {
        cout << "*";
    }
}

int main(){
    int n;
    n = 10;

    for(int i = 0; i <= n-1; i++)
    {
        print_star(n-i);
        cout << "" << endl;
    }
    return 0;
}