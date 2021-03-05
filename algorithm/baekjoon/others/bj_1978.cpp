/*
문제
주어진 수 N개 중에서 소수가 몇 개인지 찾아서 출력하는 프로그램을 작성하시오.

첫 줄에 수의 개수 N이 주어진다. N은 100이하이다. 다음으로 N개의 수가 주어지는데 수는 1,000 이하의 자연수이다.
*/

#include <iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;
    int count = N;
    
    for (int i = 0; i < N; i++)
    {
        int num;
        cin >> num;

        if (num > 1)
        {        
            for (int j = 2; j*j <= num; j++)
            {
                if (num % j == 0)
                {
                    count--;
                    break;
                }
            }
        }
        else
        {
            count--;
        }
    }
    cout << count;
}