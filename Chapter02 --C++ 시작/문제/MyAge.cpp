/*사용자에게 본인의 이름을 입력하도록 요구하는 프로그램을 작성하시오. 또한 그
    프로그램은 화면에 사용자의 나이를 월수로 나타내도록 합니다.*/
#include <iostream>
int main(){
    using namespace std;

    cout << "Enter your age:";
    int age = 0;
    cin >> age;
    cout << "당신의 나이를 월수로: " << age * 12 << endl;

    return 0;
}