/*
문제
수를 처리하는 것은 통계학에서 상당히 중요한 일이다. 통계학에서 N개의 수를 대표하는 기본 통계값에는 다음과 같은 것들이 있다. 단, N은 홀수라고 가정하자.

산술평균 : N개의 수들의 합을 N으로 나눈 값
중앙값 : N개의 수들을 증가하는 순서로 나열했을 경우 그 중앙에 위치하는 값
최빈값 : N개의 수들 중 가장 많이 나타나는 값
범위 : N개의 수들 중 최댓값과 최솟값의 차이
N개의 수가 주어졌을 때, 네 가지 기본 통계값을 구하는 프로그램을 작성하시오.

입력
첫째 줄에 수의 개수 N(1 ≤ N ≤ 500,000)이 주어진다. 그 다음 N개의 줄에는 정수들이 주어진다. 입력되는 정수의 절댓값은 4,000을 넘지 않는다.

출력
첫째 줄에는 산술평균을 출력한다. 소수점 이하 첫째 자리에서 반올림한 값을 출력한다.

둘째 줄에는 중앙값을 출력한다.

셋째 줄에는 최빈값을 출력한다. 여러 개 있을 때에는 최빈값 중 두 번째로 작은 값을 출력한다.

넷째 줄에는 범위를 출력한다.
*/
// w/ library


// #include <iostream>
// #include <vector>
// #include <algorithm>
// #include <cmath>
// #include <stdio.h>
// using namespace std;

// int count[8001];

// int main()
// {
//     int N;
//     cin >> N;
    
//     vector<int> arr(N);
//     vector<int> mode(8001);
//     float sum = 0;
//     int maxNum = -4000, minNum = 4000;

//     for (int i = 0; i < N; i++)
//     {
//         cin >> arr[i];
//         sum += arr[i];

//         maxNum = max(maxNum, arr[i]);
//         minNum = min(minNum, arr[i]);

//         mode[arr[i] + 4000]++;
//     }
    
//     printf("%d", (int)round(sum / double(N)));

    
// }




// w/o library
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int N;
    const int MAX = 500000;
    const int modeMAX = 8001;

    cin >> N;

    int arr[MAX];
    int mode[modeMAX];

    int avg = 0;
    int md;

    for (int i = 0; i < N; i++)
    {
        int k;
        cin >> k;

        arr[i] = k; 
        avg += arr[i];
        mode[arr[i] + 4000]++;

        //sort the array
        for (int j = 0; j < i; i++)
        {
            int temp;

            if (arr[j] > arr[i])
            {
                temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
            
        }
        
    }

    //Average

    cout << round(avg / N) << '\n';

    //Median, sort the array from here

    int median = arr[(N - 1) / 2];

    cout << median << '\n';

    //mode

    for (int i = 0; i < modeMAX; i++)
    {
        int max = 0;
        
        if(mode[i] > max)
        {
            max = mode[i];
            md = i - 4000;
        }
    }
    
    cout << md << '\n';

    //range;
    cout << arr[N] - arr[0] << '\n';
}