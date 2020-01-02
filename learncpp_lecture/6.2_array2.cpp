#include <iostream>

using namespace std;

void doSomething(int student_scores[])
{
    cout << &student_scores << endl;
    cout << &student_scores[0] << endl;
    cout << &student_scores[1] << endl;
    cout << "Size in doSomething " << sizeof(student_scores); // 아래와 달리 4byte임, 포인터를 받기 때문..
}

int main()
{
    const int num_students = 5;
    //cin >> num_students;

    int students_scores[num_students] = {1,2,3,4,};

    cout << &students_scores << endl;
    cout << &(students_scores[0]); // array 와 첫 원소는 같은 메모리 주소를 할당받게됨
    cout << &(students_scores[1]); // 앞 원소와 연속된 메모리
    cout << "Size in main " << sizeof(students_scores); 

    void doSomething(students_scores); 

    /*
    이 경우 doSomething에서 출력하는 students_scores 배열의 메모리와 main에서 출력하는 students_scores 배열 의 메모리가 다름
    왜냐하면 doSomething에서 함수 인자로 받을 때, 새로운 메모리 주소를 받고, main에서 함수값을 넣을때는 이것을 그 새로운 메모리 주소에 복사하는 형태임
    따라서 array가 커지면 복사하는 메모리의 양이 늘어나므로 비효율적이 될 것임
    */

    return 0;
}

// int main()
// {
//     using namespace std;
//     int prime[5] = {1,2,3,5,7};
//     int zero_init[5] = {1,2,3};

//     int length[] = {4,2,3};

//     cout << prime[0] << endl;
//     cout << length << endl;

//     enum studentnames
//     {
//         john,
//         kate,
//         uhyun,
//         max_students,
//     };

//     int testScores[max_students];
//     testScores[john] = 90;

//     // int testScores[static_cast<int>(studentnames::max_students)];
//     // testScores[static_cast<int>(studentnames::kate)] = 76;

//     return 0;
// }