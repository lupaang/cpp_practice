/*

문제
두 개의 자연수를 입력받아 최대 공약수와 최소 공배수를 출력하는 프로그램을 작성하시오.

입력
첫째 줄에는 두 개의 자연수가 주어진다. 이 둘은 10,000이하의 자연수이며 사이에 한 칸의 공백이 주어진다.

출력
첫째 줄에는 입력으로 주어진 두 수의 최대공약수를,둘째 줄에는 입력으로 주어진 두 수의 최소 공배수를 출력한다.
*/

// #include <iostream>
// using namespace std;

// int main()
// {
//     int x, y;
//     // cin >> x >> y;
    
//     x = 72;
//     y = 27;

//     if (x == y)
//     {
//         cout << x << "\n";
//         cout << x << "\n";
//     }
    
//     else
//     {
//         int bigger = x > y ? x : y;
//         int smaller = x < y ? x : y;

//         if (bigger%smaller == 0)
//         {
//             cout << smaller << "\n";
//             cout << bigger << "\n";
//         }

//         else
//         {
//             for (int i = 2; i <= smaller; i++)
//             {
//                 if (smaller % i == 0 && bigger % i == 0)
//                 {
//                     cout << i << "\n";
//                     break;
//                 }
//             }

//             for (int i = 1; i <= bigger; i++)
//             {
//                 if ((smaller * i) % bigger == 0)
//                 {
//                     cout << smaller * i << "\n";
//                     break;
//                 }
//             }
//         }
//     }
// }



#include <iostream>
using namespace std;

int gcd(int a, int b)
{
    int n;
    while(b != 0)
    {
        n = a % b;
        a = b;
        b = n;
    }

    return a;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int a, b;

    cin >> a >> b;

    cout << gcd(a, b) << "\n" << (a * b) / gcd(a,b);
}