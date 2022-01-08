// 외부 변수들
// support.cpp와 컴파일 한다
#include <iostream>
using namespace std;
// 외부 변수
double warming = 0.3;
// 함수 원형
void update(double dt);
void local();

int main(){
    cout << "전역 warming은 " << warming << "도입니다. \n";
    update(0.1);
    cout << "전역 warming은 " << warming << "도입니다. \n";
    local();
    cout << "전역 warming은 " << warming << "도입니다. \n";
    return 0;
}