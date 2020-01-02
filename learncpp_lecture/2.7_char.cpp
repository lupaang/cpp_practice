#include <iostream>
#include <limits>

int main()
{
    using namespace std;

    char c1(65);
    char c2('A'); // 단일 문자면 그냥 따옴표, "Hello, World" 등 문자열 사용 시 쌍따옴표 // std::string

    cout << c1 << " " << c2 << " " << int(c1) << " " << int(c2) << " " << endl;

    // c-style casting
    cout << (char)65 << endl;
    cout << (int)'A' << endl;

    //cpp style
    cout << char(65) << endl;
    cout << int('A') << endl;

    cout << static_cast<char>(65) << endl;
    cout << static_cast<int>('A') << endl;

    char c3(97);

    cout << c3 << endl;
    cout << static_cast<int >(c3) << endl;
    cout << c3 << endl;

    cout << sizeof(char) << endl; // unsigned char 도 해 볼 것
    cout << (int)std::numeric_limits<char>::max() << endl;
    cout << (int)std::numeric_limits<char>::lowest() << endl;

    // cin >> c1;
    // cout << c1 << " " << static_cast<int>(c1) << endl;

    cout << "This is first line \nsecond line";
    cout << "This is first line" << endl;
    cout << "second line"; // endl과 \n은 둘다 줄 바꿈 기능이지만 차이가 있음. endl은 cout 버퍼에 있는 모든 것을 다 출력하고 줄을 바꾸라는 의미가 내포, \n은 그냥 줄바꿈

    cout << int('\n') << endl; // \n 은 한 글자로 인식됨 
    //std::flush

    cout << "This is first line \tsecond line\"";

    cout << "This is first line \a second line";

    wchar_t wc;
    char32_t c32;



    return 0;
}