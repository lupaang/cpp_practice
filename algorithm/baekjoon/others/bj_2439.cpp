/*
첫째 줄에는 별 1개, 둘째 줄에는 별 2개, N번째 줄에는 별 N개를 찍는 문제

하지만, 오른쪽을 기준으로 정렬한 별(예제 참고)을 출력하시오.

2441번도 비슷한 문제임
*/

// #include <iostream>

// using namespace std;

// void right_order(int a){
//     for(int i = a-1; i >=0 ; i--)
//     {
//         cout << " ";
//     }
// }

// int main(){
//     int n;
//     n = 10;

//     for(int i = 1; i <= n; i++)
//     {
//         static string x = "*";
//         right_order(n-i); 
//         cout << x << endl;
//         x += "*";
//     }
//     return 0;
// }

#include <iostream>

using namespace std;

void right_order(int a){
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
        static string x = "";
        cout << x;
        right_order(n-i);
        cout << "\n";
        x += " ";
    }
    return 0;
}


