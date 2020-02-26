#include <iostream>
#include <array>
#include <tuple>

using namespace std;

int getValue(int x)
{
    int value = x * 2;
    return value;
}

int* getValue2(int x)
{
    int value = x * 2;
    return &value;
}

int& getValue3(int x)
{
    int value = x * 2;
    return value;
}

int& get(std::array<int,100>& my_array, int ix)
{
    return my_array[ix];
}

struct S
{
    int a,b,c,d;
};

S getStruct()
{
    S my_s{1,2,3,4};
}

std::tuple<int, double> getTuple()
{
    int a = 10;
    double d = 3.14;
    return std::make_tuple(a,d);
}

int main()
{
    int value = getValue(3);

    int *value2 = getValue2(4); // 주소로 직접 받는 것은 아주 안좋음
    int value3 = *getValue2(3); 
    // dereferencing을해서 받는 것은 위험한 방법임.. 함수 밖으로 벗어나면 사라질 변수를 dereferencing하는 것이 좋진 않음, value라는 변수는 사라졌는데 주소만 갖고 있다?

    int value4 = getValue3(5);

    std::array<int, 100> my_array;
    my_array[30] = 10;

    get(my_array, 30) = 1024;
    cout<< my_array[30] << endl; 

    S my_s = getStruct();
    my_s.b;

    std::tuple<int, double> my_tp = getTuple();
    cout << std::get<0>(my_tp) << endl; // tuple.a
    cout << std::get<1>(my_tp) << endl;  // tuple.d

    return 0;
}