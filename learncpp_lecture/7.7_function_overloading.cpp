//기능이 비슷한 경우 같은 함수를 
//함수를 정의할 때,이름만 같다고 같은 함수로 처리하는 것이 아니라 매개변수까지 보고 같은 함수인지 판단하게 됨

#include <iostream>
#include <string>

using namespace std;

typedef int my_int;

int add(int x, int y)
{
    return x + y;
}

// double add(int x, int y)
// {
//     return x + y;
// }

// 위처럼 return type만 다르면 함수 오버로딩이 안됨.. return type으로는 함수 구분이 안됨

double add(double x, double y)
{
    return x + y;
}

void getRandomValue(int &x)
{

}

void getRandomValue(double &x)
{

}

 
/*
void print(int x)
{}

void print(my_int x)
{}
*/

// typedef로 눈속임처럼 매개변수 type을 다르게 해도 컴파일러에서 같은 함수로 어차피 인식함

void print(char *value)
{

}

void print(int value)
{

}

int main()
{
    add(1,2);
    add(3.0, 4.0);
    //위에서 어떤 add를 사용할지는 "컴파일할 때" 결정되어야함

    return 0; 
}