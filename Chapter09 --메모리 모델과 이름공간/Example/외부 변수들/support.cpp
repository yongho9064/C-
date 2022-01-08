// 외부 변수를 사용한다
#include <iostream>
extern double warming;

using std::cout;

void update(double dt);
void local();

void update(double dt){
    extern double warming;
    warming += dt;
    cout << "전역 warming이 " << warming;
    cout << "도로 갱신되었습니다.\n";
}

void local(){
    double warming = 0.8;

    cout << "지역 warming은 " << warming << "도입니다.\n";
    cout << "그러나, 전역 warming은 " << ::warming;
    cout << "도입니다.\n";
}