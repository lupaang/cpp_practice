#include <iostream>

//template

auto add(int x, int y){
    return (x + (double)y);
}

int main(){
    using namespace std;

    auto a = 123; // auto a; 와 같이 초기화가 되지 않으면 auto를 사용할 수 없음. 추론할 수 없으니 당연한 것
    auto c = 1 + 1.3;
    double result = add(2,3);

    cout << a << endl;
    cout << result << endl;

    return 0;
}