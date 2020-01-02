#include <iostream>

using namespace std;

int main()
{
    int apple = 5;
    cout << apple << endl;

    {
        int apple = 1; // 위에서의 apple은 이 블럭에서는 숨겨져버림. 보이는 건 같지만, 바깥의 것과 아예 다른 apple인 것임
        // 그러므로 다른 블럭에서는 이름을 다르게 쓰는 것을 권장
        // 현대 프로그래밍에서는 변수의 duration을 최대한 줄이고자 함, 그래서 블럭을 분리하는 것
        cout << apple << endl;
    }

    cout << apple << endl;
}