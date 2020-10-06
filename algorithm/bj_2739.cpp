/*
N을 입력받은 뒤, 구구단 N단을 출력하는 프로그램을 작성하시오. 출력 형식에 맞춰서 출력하면 된다.

2 * 1 = 2
2 * 2 = 4
2 * 3 = 6
2 * 4 = 8
2 * 5 = 10
2 * 6 = 12
2 * 7 = 14
2 * 8 = 16
2 * 9 = 18
*/

#include<iostream>
using namespace std;

// int main()
// {
//     int n;
//     cin >> n; // --> 테스트 시 값 변경

//     for(int i = 1; i <= 9; i++)
//     {
//         cout << n << " * " << i << " = " << n * i << "\n";
//     }
//     return 0;
// }

/*
첫째 줄에는 별 1개, 둘째 줄에는 별 2개, N번째 줄에는 별 N개를 찍는 문제
*/

int main()
{
    int n;
    string x;

    n = 3;

    for(int i = 1; i <= n; i++)
    {
        static string x = "*";
        cout << x << "\n";
        x += "*";
    }
    

}


