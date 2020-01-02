#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct Employee
{
    short id; // 2byte
    int age; // 4byte
    double wage; // 8byte
}; // 14byte 필요

//void printPerson(double height, int age,... ) 이런식으로 하나를 표현하는데 다양한 자료형이 사용되는데, 이를 묶는 것이 구조체

struct Person
{
    double height; // 여기서 초기화 해줄 수도 있고, 여기서 기본으로 초기화를 해줘도 
                    //아래 함수에서 새로 초기화를 해주면 아래 함수에서 초기화된 값으로 들어감
    int age;
    float weight;
    string name; 

    void printPerson() // 이렇게 구조체 안에 함수를 함께 정의할수도 있다 
    {
        cout << height << age << weight << name << endl;
    } 
};

// void printPerson(Person person)
// {
//     cout << person.height << person.age << person.weight << person.name << endl;
// }

struct Family
{
    Person me, mom, dad;
};

Person getMe()
{
    Person me {2.0, 20, 70.1, "Jack Jack"};

    return me;
}
 
int main()
{
    // double height, height2, height3; // double heigth[100];
    // int age;
    // float weight;
    // string name;

    Person me {2.0, 20, 70.1, "Jack Jack"};

    me.printPerson();

    Person mom;
    Person dad; 

    return 0;
}