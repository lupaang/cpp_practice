#include <iostream>

enum class Colors{
    BLACK,
    WHITE,
    RED,
    BLUE,
};

void printColorname(Colors color)
{
    using namespace std;
    //  if (color == Colors::BLACK) {
    //      cout << "Black"<< endl;
    //  }
    //  else if (color == Colors::WHITE) {
    //      cout << "White" << endl;
    //  }
    {
        switch(color) // static_cast<int>(color)
        {
            case Colors::BLACK:
                cout << "Black";
                break;
            case Colors::WHITE:
                cout << "White";
                break;
            case Colors::RED:
                cout << "Red";
                break;
        }
    }
    
     
     
}

int main()
{
    using namespace std;

    printColorname(Colors::BLUE);
    
    int x;

    cin >> x;

    {
        switch(x)
        {
            // int a;
            // int b = 5;  case 문 밖 에서 위에 a 처럼 선언은 할 수 있으나, b처럼 초기화는 시킬 수 없게 되어 있음
            // 초기화는 case 문 안에서만 가능.. 하지만 그냥 밖에서 정의하고 들어가는 것이 편함

            case 0:
            cout << "zero";
            // int b = 5; --> 가능
            break;
            case 1: // if 와 달리 x = 1이면 one, two 가 모두 출력됨. 그래서 의도하지 않는 한, break를 넣어줄 것
            cout << "one";
            break;
            case 2:
            cout << "two";
            break;

            default:
            cout << "undefined";
            break;
        }
        cout << endl;
    }
}