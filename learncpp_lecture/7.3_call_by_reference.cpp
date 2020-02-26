#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

void addOne(int &y)
{
    cout << y << " " << &y << endl;
    y = y + 1; // 값에 의한 전달은 변수를 새로 정의를 하나 하고 거기다가 값을 복사하는 개념임 <> 참조에 의한 전달은 변수 자체를 넘김, 복사가 이뤄지지 않는다.
}

void getSinCos(const double &degrees, double &sin_out, double &cos_out) 
// c, c++ 에서는 함수가 return 값을 하나만 줄 수 있는데, call by reference를 사용하여 아래 main 함수에서처럼 sin, cos를 바꾸는 방법으로 마치 여러 개를 return 하는 것처럼 사용할 수 있음
// 이 함수처럼 일반적으로 인자를 넘길 때, 입력을 앞에 두고 출력으로 할 것을 뒤에 두는 것이 일반적
{
    static const double pi = 3.141592;
    const double radians = degrees * pi / 180.0;

    sin_out = std::sin(radians);
    cos_out = std::cos(radians);
}

void foo(const int &x)
{
    cout << x << endl;
}

void printElement(int (&arr)[4])
//void printElement(const vector<int>& arr)
{
    
}

int main()
{
    int x = 5;
    cout << x << " " << &x << endl;

    addOne(x);

    cout << x << " " << &x << endl;

    double sin(0.0);
    double cos(0.0);
    
    getSinCos(30.0, sin, cos);

    cout << sin << " " << cos << endl;

    foo(6); 
    // foo 함수에서 int &x로 할 경우 받는 함수가 주소를 받아야 하는데, 6은 literal이기 때문에 주소가 없음 -> foo 함수에서 &을 떼주거나, const int &x로 바꿔줌
    // 최근 스타일 상 함수의 매개변수는 거의 const int &x 와 같이 const + 주소 값으로 넘겨주고 있음

    int a = 5;
    int *ptr = &a;

    // foo(ptr);

    int arr[] {1,2,3,4};
    // vector<int> arr{1,2,3,4};

    printElement(arr);

    return 0;
}