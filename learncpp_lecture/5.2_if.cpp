#include <iostream>

int main()
{
    using namespace std;

    int x;
    cin >> x;

    if (1) { // 0아니면 True이므로 실행
        int x = 5; // 여기서 x를 선언해봤자, if 문 안에서는 결국 중괄호 안에 들어가있는 셈이기 때문에 이 if scope를 벗어나면 선언이 의미를 잃게됨
        // 즉 이 안에서 선언해서 뭔가를 작업하는 건 상관없지만, 전역 변수로는 쓰일 수 없다는 이야기(if 에 중괄호를 넣지 않는 경우도 있으므로)
        
    }
    else {

    }

    if(x = 0) // -> x = 0으로 초기화 되고 if(0) 이 실행되는 것이라고 보면 됨.
}