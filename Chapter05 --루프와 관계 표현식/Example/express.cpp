// 표현식의 값
#include <iostream>
int main(){
    using namespace std;
    
    int x;

    cout << "대입 표현식 x = 100의 값은 ";
    cout << (x = 100) << endl;                  // << 연산자 우선순위가 더 높기 떄문에 괄호를 해야한다.
    cout << "현재 x의 값은 " << x << endl;
    cout << "관계 표현식 x < 3의 정수값은 ";
    cout << (x < 3) << endl;
    cout << "관계 표현식 x > 3의 정수값은 ";
    cout << (x > 3) << endl;
    cout.setf(ios_base::boolalpha);         // 최신 C++ 기능
    cout << "관계 표현식 x < 3의 bool값은 ";
    cout << (x < 3) << endl;
    cout << "관계 표현식 x > 3의 bool값은 ";
    cout << (x > 3) << endl;
    return 0;

}