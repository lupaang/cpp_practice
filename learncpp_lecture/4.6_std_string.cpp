#include <iostream>
#include <string>

int main(){
    using namespace std;


    // const char my_hel [] = "hello world";
    // const string my_hello = "my hello";

    // string my_id = "123";

    // cout << "hello world" << endl;

    // return 0;

    // cout << "your name? : "<< endl;
    // string name;

    // // cin >> name;
    // getline(cin, name);

    // cout << "your age? : " << endl;
    // string age;

    // getline(cin, name);


    string a("hello, ");
    string b("world");
    string hw = a + b; // append

    hw += "I'm good";

    cout << hw << endl;
    cout << hw.length() << endl;
}