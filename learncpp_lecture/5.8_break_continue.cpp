#include <iostream>

using namespace std;
void breakOrReturn()
{
    while(true)
    {
        char ch;
        cin >> ch;

        if(ch == 'b')
        break;
        if(ch == 'r')
        return;
    }
}

int main()
{
    using namespace std;

    // for(int i = 1; i < 10; i++)
    // {
    //     if (i % 2 == 0) {
    //         continue; // continue를 할 경우 for 문 아래쪽으로 continue하는 것이 아니라 아래쪽은 건너뛰고 다시 위로 돌아가 for 문 실행
    //     }
    //     cout << i << endl;
    // }
    
    int count(0);
    bool escape_flag = false;

    while(!escape_flag)
    {
        char ch;
        cin >> ch;

        cout << ch << " " << count++ << endl;
        
        if(ch = 'x')
           escape_flag = true;
    }

    return 0;
}