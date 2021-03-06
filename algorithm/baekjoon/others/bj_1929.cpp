/*
문제
M이상 N이하의 소수를 모두 출력하는 프로그램을 작성하시오.
에라스토테네스의 체

입력
첫째 줄에 자연수 M과 N이 빈 칸을 사이에 두고 주어진다. (1 ≤ M ≤ N ≤ 1,000,000)

출력
한 줄에 하나씩, 증가하는 순서대로 소수를 출력한다.
*/

#include <iostream>
using namespace std;

int main()
{
    const int X = 1000001;
    int M, N;
    
    cin >> M >> N;

    bool num[X];

    for (int i = 2; i <= X; i++)
    {
        num[i] = true;
    }

    num[1] = false;

    for (int i = 2; i*i <= X; i++)
    {
        if (num[i] == true)
        {
            for (int j = i + i; j <= X; j+=i)
            {
                num[j] = false;
            }
        }
        
    }

    for (int i = M; i <= N; i++)
    {
        if(num[i])
        {
            cout << i << "\n";
        }
    }
}