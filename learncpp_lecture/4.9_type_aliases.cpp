#include <iostream>
#include <vector>
#include <cstdint>


int main()
{
    using namespace std;

    typedef double distance_t;
    
    double distance;
    distance_t home_to_school; 


    vector < pair < string, int > > pair_list1;
    vector < pair < string, int > > pair_list2;

    //typedef vector < pair < string, int > > pair_list_t; 로 정의하고 하면, 반복되는 pair를 정의할 때 더 쉬워질 수 있다.

    //using pair_list_t = vector < pair < string, int > >;  로도 사용 가능

    return 0;
}