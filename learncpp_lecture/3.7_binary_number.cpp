#include <iostream>

using namespace std;

int main()
{
    /*

    148 을 이진수로?

    148 / 2 -> 나머지 0
    74 / 2 -> 나머지 0
    37 / 2 -> 나머지 1 (나머지가 남으면 몫을 넘김)
    18 / 2 -> 나머지 0
    9 / 2 -> 나머지 1
    4 / 2 -> 나머지 0
    2 / 2 -> 나머지 0
    1 / 2 -> 나머지 1

    1001 0100 (아래서 위로 보면 됨)


    <음수 표현>

    -5

    0000 0101 -> 5를 이진수로 표현 (맨 앞의 0은 부호가 + 이기 때문에 0인 것임)
    
    compliment -> 보수

    1111 1010
    1111 1011 -> -5 임, 음의 정수를 표현할 때는 보수를 취해준 뒤, 1을 더해준다. 이유는 아래 0을 표현할 때 문제가 생기기 때문이다.

    0000 0000 -> 0
    1111 1111 -> 0의 보수 (그러면 0은 1111 1111, 0000 0000 두 개로 표현되는데, 이를 막기 위해 1을 더해주는 것임)


    <이진수 to 십진수>

    ---signed integer의 경우

    1001 1110
    0110 0001 (보수)
    0110 0010 (1 더해줌) -> 계산하면 98 -> 최초 1001~~ 이었으므로 첫 자리가 1, 즉 음수 -> -98

    ---unsigned integer의 경우는 그냥 2^7부터 시작하면 됨



    */
}