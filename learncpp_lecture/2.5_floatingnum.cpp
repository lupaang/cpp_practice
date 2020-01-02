#include <iostream>
#include <iomanip>
#include <limits>
#include <cmath>

int main()
{
    using namespace std;

    // float f;
    // double dl;
    // long double dd;

    //float f(3.141592); // 3.14 = 31.4/10
    // double d(3.141592);
    // long double dd(3.141592);

    //cout << sizeof(f) << endl;
    // cout << sizeof(d) << endl;
    // cout << sizeof(dd) << endl;

    // cout << numeric_limits<float>::max() << endl;
    // cout << numeric_limits<double>::max() << endl;
    // cout << numeric_limits<long double>::max() << endl;

    // cout << numeric_limits<float>::min() << endl;  // min은 표현할 수 있는 가장 작은 '절대값'을 보여줌
    // cout << numeric_limits<double>::min() << endl;
    // cout << numeric_limits<long double>::min() << endl;

    // cout << numeric_limits<float>::lowest() << endl;
    // cout << numeric_limits<double>::lowest() << endl;
    // cout << numeric_limits<long double>::lowest() << endl;

    // cout << 3.14 << endl;
    // cout << 3.14e1 << endl;
    // cout << 31.4e-1 << endl;

    //cout << std::setprecision(16);
    // cout << 1.0 / 3.0 << endl; -> 0.333333까지만 나왔는데, setprecision으로 더 많은 것을 표현할 수 있게됨.

    // cout << std::setprecision(9);

    // float f(123456789.0f); // significant digits -> 10 일때, set precision이 9까지만 되어있어서 123456792 로 정밀도가 낮아짐

    // cout << f << endl;

    // double d(0.1);

    // cout << std::setprecision(17);
    // cout << d << endl; // 0.10000000000001이됨 이진수 부동소숫점을 사용하여 표현할 수 있는 0.1에 가장 가까운 수

    // cout << std::setprecision(17);

    // double d1(1.0);
    // double d2(0.1+0.1+0.1+0.1+0.1+0.1+0.1+0.1+0.1+0.1);

    // cout << d1 << endl;
    // cout << d2 << endl;

    double zero = 0.0;
    double posinf = 5.0 / zero;
    double neginf = -5.0 / zero;
    double nan = zero / zero;

    cout << zero << endl;
    cout << posinf << " " << std::isinf(posinf) << endl; // inf
    cout << neginf << " " << std::isnan(neginf) <<  endl; // -inf
    cout << nan << " " << std::isnan(nan) << endl; // nan(ind)

    return 0;
}