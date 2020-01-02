#include <iostream>

using namespace std;

struct Rectangle
{
    int width;
    int length;
};

enum StudentName
{
    John,
    Mary,
    Stewart,
    NUM_STUDENTS,
};

int main()
{
    int one_student_score;
    int students_scores[NUM_STUDENTS];

    cout << sizeof(one_student_score);
    cout << sizeof(students_scores);

    one_student_score = 100;
    students_scores[0] = 90;

    cout << sizeof(Rectangle); 

    Rectangle rect_array[10];
    
    cout << sizeof(rect_array);

    int my_array[5] = {1,2,3,4,5};
    cout << my_array[John];

    /*
    int num_students = 0;
    cin >> num_students;

    int num_scores[num_students]; --> error, num_students의 값이 런타임(즉 실행시켜봐야 알 수 있음)에 결정될 때는, 
    이렇게 size가 고정된 array 에는 사용할 수가 없다. fixed size array는 컴파일 전에 값을 고정시켜줘야함

    */


    return 0;
}