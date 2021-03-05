/*
문제
정수 N이 주어졌을 때, 소인수분해하는 프로그램을 작성하시오.

입력
첫째 줄에 정수 N (1 ≤ N ≤ 10,000,000)이 주어진다.

출력
N의 소인수분해 결과를 한 줄에 하나씩 오름차순으로 출력한다.
*/



#include <iostream>
using namespace std;

int main()
{
    // int x;
    // cin >> x;

    int x = 21332;

    for (int i = 2; i*i <= x; i++)
    {
        while (x % i == 0)
        {
            cout << i << '\n';
            x /= i;
        }

    }

    if(x > 1)
    {
        cout << x;
    }
}