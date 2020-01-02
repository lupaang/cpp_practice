#include <iostream>
#include <typeinfo>

enum Color // user-defined data type
{
    COLOR_BLACK, // 숫자 대입 가능, -3 넣으면 아래 값은 -2 가 됨
    COLOR_RED,
    COLOR_BLUE, // 만약 5를 대입하고, GREEN에 5를 넣으면 어떻게 될까?
    COLOR_GREEN,
    BLUE,
};

/*

enum Feeling
{
    COLOR_RED, 
}; 이런식으로 했을 경우, 다른 scope여서 중복이 안될 것 같지만, 컴파일 에러가 남. 서로 달라보이는 그룹의 것도 전역처럼 작동. 

이를 해결하기위해선 enum class를 사용해주면됨

*/

int ComputeDamage(int weapon_id){
    if (weapon_id == 0) {
        return 1;
    }
    if (weapon_id == 1) {
        return 2;
    }    
}

int main(){
    using namespace std;

    Color paint = COLOR_BLACK;
    Color house = COLOR_BLUE; 

    cout << paint << " " << COLOR_BLACK << endl;

    // Color my_color = 3; -> 에러남
    // Color my_color = static_cast<Color>(3); -> 에러 안남
    // cin >> my_color; -> 입력 받을 수 없음

    return 0;
}