#include <iostream>
#include <bitset>

using namespace std;

int main()
{
    // //item 의 보유 여부를 표현할 때..
    // bool item1_flag = false;
    // bool item2_flag = false;


    // //event!
    // item1_flag = true;

    // //die! item2 lost
    // item2_flag = false;

    // //item 합성
    // if (item1_flag == true && item2_flag == false) {
    //     item1_flag = false;
    //     item2_flag  = true;
    // }2
    const unsigned char opt0 = 1 << 0;
    const unsigned char opt1 = 1 << 1;
    const unsigned char opt2 = 1 << 2;

    cout <<  bitset<8>(opt0) << endl;
    cout <<  bitset<8>(opt1) << endl;
    cout <<  bitset<8>(opt2) << endl;
    
    unsigned char items_flag = 0;

    cout <<  "no item" << bitset<8>(items_flag) << endl;
    cout <<  "get item 0" << bitset<8> (items_flag |= opt0) << endl;
    cout <<  "get item2" << bitset<8> (items_flag |= opt2) << endl;
    cout <<  "lost item2" << bitset<8> (items_flag &= ~opt2) << endl;

    //have item 2?
    if (items_flag & opt2)
    {
        cout << "have item 2" << endl;
    }
    else
    {
        cout << "no item 2"<< endl;
    }
    
    //obtain item 1,2?

    items_flag |= (opt1 | opt2);

    cout << bitset<8>(opt1|opt2) << endl;
    cout << bitset<8>(items_flag) << endl;

    // opt2가 있고, opt1 이 없으면 opt2를 버리고 opt1이 생긴다
    if ((items_flag & opt2) && !(items_flag & opt1)) {
        items_flag ^=opt2;
        items_flag ^=opt1;
    }

    cout << bitset<8>(items_flag) << endl; 
    
    //color palette, R/G/B 분리하는 법 

    const unsigned int red_mask = 0xFF0000;
    const unsigned int green_mask = 0x00FF00;
    const unsigned int blue_mask = 0x0000FF;

    unsigned int pixel_color = 0xDAA520;

    cout << bitset<32>(pixel_color) << endl;

    //get R/G/B

    unsigned char blue = (pixel_color & blue_mask);
    unsigned char green = (pixel_color & green_mask) >> 8;

    cout << bitset<8>(blue) << " " << int(blue) << endl;
    cout << bitset<8>(green) << " " << int(green) << endl;
    
     
}