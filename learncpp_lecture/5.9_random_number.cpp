#include <iostream>
#include <cstdlib> // std::rand() , std::srand()
#include <ctime> // std::time()
#include <random>


using namespace std;

unsigned int PRNG() // pseudo number generator
{
    static unsigned int seed = 1234;
    seed = 1283912 * seed + 1231;

    return seed % 12313;
}

int getRandomNumber(int min, int max)
{
    static const double fraction = 1.0 / (RAND_MAX + 1.0);
    return min + static_cast<int>((max - min + 1)*(std::rand()*fraction)); 
}

// int main()
// {
//     for(int i = 0; i <= 100; i++)
//     {
//         cout << PRNG() << "\t";

//         if ( i % 5 == 0 )
//             cout << endl;
//     }
    
//    
 
// }

int main()
{
    std::srand(5523); //seed
    // std::srand(static_cast<unsigned int>(std::time(0)));

    for (int count = 1; count <= 100; count++)
    {
        cout << std::rand() << endl;

        if(count % 5 == 0) cout << endl;
    }

    std::random_device rd; //random device 만들기
    std::mt19937_64 mersenne(rd()); // create a mesene twister (생성기)
    std::uniform_int_distribution<> dice(1,6); // 분포

    cout << dice(mersenne) << endl;


}