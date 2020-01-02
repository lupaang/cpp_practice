#include <iostream>


int main()
{
    using namespace std;

    enum class Color 
    {
        RED,
        BLUE,
    };

    enum class Fruit
    {
        APPLE,
        BANANA,
    };

    Color color = Color::RED;
    Fruit fruit = Fruit::APPLE;

    if (static_cast<int>(color) == static_cast<int>(fruit)) {
        
    }
    
}