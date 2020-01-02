#include <iostream>

using namespace std;

int main()
{
    //logical NOT !x
    bool x = true;
    cout << x << endl;
    //logical AND &&
    bool x1 = true;
    bool x2 = false;

    cout << (x1 && x2) << endl;
    //logical OR ||

    bool x3 = true;
    bool x4 = false;

    cout << (x3 || x4) << endl;


    // 0이 아니면 true
    int a = 5;
    int b = 7;
    if (!a == b) {  // !5 이면 5가 0이 아니므로 true, !true 이므로 false
        cout << "what" << endl;
    }
    else
    {
        cout << "What" << endl;
    }
    
    //short circuit evaluation

    int c = 2;
    int d = 5;

    if (c == 2 && d++ == 5) { // c!=2 로 실험하면, d++ 이 작동하지 않음, && 에서 왼쪽이 false이면 오른쪽 조건은 빠른 계산을 위해 작동을 안하는 것임
        /* code */
    }

    cout << d << endl;
    
    //XOR (false, false -> false) (false, true -> true) (true, false -> true) (true, true -> false)

    bool e = true;
    bool f = false;

    cout << (e!=f) << endl;

    //logical and 와 or 는 우선순위가 다르다. && 가 || 보다 우선순위가 높음, 따라서 괄호를 잘 활용해야함
    

    return 0;
}