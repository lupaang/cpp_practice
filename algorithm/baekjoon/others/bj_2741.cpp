/*
자연수 N이 주어졌을 때, 1부터 N까지 한 줄에 하나씩 출력하는 프로그램을 작성하시오.
*/

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n; // 테스트 입력 시 값 넣어 볼 것
    for(int i = 1; i <= n; i++)
    {
        cout << i << "\n";
    }
    return 0;
}

/*
자연수 N이 주어졌을 때, N부터 1까지 한 줄에 하나씩 출력하는 프로그램을 작성하시오.
*/