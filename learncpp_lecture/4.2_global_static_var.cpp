#include <iostream>

using namespace std;

// int value = 123; -> global var

// int main(){

//     cout << value << endl;

//     int value = 1;

//     cout << ::value << endl; // :: -> global scope operator
//     cout << value << endl; -> local var
//     return 0;
// }

// ------------static duration variable

/*
void doSomething()
{
    static int a = 1; // static 을 붙였을 때랑 안붙였을 때랑 아래 main 함수에 차이가 생김
    static 은 메모리가 static하게 선언된다는 말. 즉 그냥 int a로 하면 블럭을 벗어날 경우 메모리를 반납하게 되는데,
    static 을 붙여줄 경우 영역 안에서 a 에 대한 값을 다시 할당해주지 않는다. 
    즉 static을 선언한 변수를 다시 만날 경우 a = 1이라고 다시 대입하지 않음. 
    반대로 그러면 static을 최초 선언할 떄는 static int a 그냥 이렇게 값을 초기화해주지 않으면 사용할 수 없다는 의미이기도 함.
    반드시 static int a = 1 처럼 초기화를 시켜준 상태여야한다
    디버깅할 때 많이 쓰는 개념임  


    ++a;
    cout << a << endl;
}


int main() {
    doSomething();
    doSomething();

    return 0; 
}
*/

/*
---------------static global variable

static int b = 1 -> external linkage가 안됨, 즉 다른 cpp 파일에서 사용할 수 없도록 막아주는 역할을 함


---------------forward declaration

extern void doSomething(); // extern은 생략해도됨. 어딘가에 dosomething 함수가 있으니, 갖다써라.
extern int a; // 초기화를 안할 경우 메모리 할당이 안되기 때문에, ext_link 파일에서 초기화를 해줘야함
또한, 여기서 a = 123 으로 새롭게 초기화를 할 경우 외부 연결된 변수와 메모리 충돌이 나기 때문에 오류가 나게 됨.
*/


/*
int g_x;  -> external linkage, 초기화가 안된 전역 변수를 선언하는 것
static int g_x -> internal linkage, 다른 cpp 파일에서 이 g_x로 접근할 수가 없다 
const int g_x -> 틀린 표현, 값을 안바꾸겠다는 것이 전제인데 초기화가 아예 안되어있으면 안됨 

extern int g_x;
extern const int g_x;

https://zerobell.tistory.com/22 도 참조할 것 (요약 : 헤더 파일에서 전역 변수를 초기화 하지 않고 선언만 하고 cpp 파일에서 정의한다)
http://blog.naver.com/PostView.nhn?blogId=phh0606c&logNo=10174041285&parentCategoryNo=&categoryNo=7&viewDate=&isShowPopularPosts=true&from=search
도 참조할 것 (요약 : 헤더 파일에서 변수 선언하는 것은 그냥 코드 복붙이나 마찬가지기 때문에, 
두 개의 cpp 파일에서 같은 헤더파일을 불러온다고 하나의 메모리에 정의가 되는 것이 아니라 다른 메모리에 정의가 되어 낭비가 된다..)

*/