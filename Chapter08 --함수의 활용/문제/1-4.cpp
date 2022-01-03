#include <iostream>
using namespace std;
#include <cstring>          // strlen(), strcpy()를 사용하기 위해
struct stringy{
    char* str;              // 문자열을 지시한다
    int ct;                 // 문자열의 길이('\0'은 제외)
};
// set(), show()의 원형과, show() 함수를 이 자리에 넣는다
void set(stringy& beany, const char* testing);
void show(const stringy& beany, int count = 1);
void show(const char* testing, int count = 1);

int main() {
    stringy beany;
    char testing[] = "Reality isn't what it used to be.";

    set(beany, testing);
        // 첫 번쨰 매개변수는 참조이다
        // testing의 사본을 저장할 공간을 대입한다
        // beany의 str 멤버가 새 블록을 지시하도록 설정한다
        // testing을 새블록에 복사한다
        // beany의 ct 멤버를 설정한다

    show(beany);                            // 문자열 멤버를 한 번 출력한다
    show(beany, 2);                         // 문자열 멤버를 두 번 출력한다
    testing[0] = 'D';
    testing[1] = 'u';
    show(testing);              // testing 문자열을 한번 출력한다
    show(testing, 3);           // testing 문자열을 세 번 출력한다
    show("Done!");
    return 0;
}
void set(stringy &beany, const char* testing){
    beany.ct = (strlen(testing) - 1);
    char* arr = new char[beany.ct];;
    beany.str = arr;
    strcpy(arr, testing);
}
void show(const stringy &beany, int count){
    for(int i = 0; i < count; i++)
        cout << beany.str << endl;
}
void show(const char* testing, int count){
    for (int i = 0; i < count; i++)
        cout << testing << endl;
}