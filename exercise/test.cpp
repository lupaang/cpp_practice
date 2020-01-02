
#include <iostream>
using namespace std;

int main()
{
    int A,B,C;
    int multiplied;
    int m_len;

    A = 150;
    B = 234;
    C = 931;
    multiplied = A*B*C;

    m_len = to_string(multiplied).length();

    cout << m_len;
}
