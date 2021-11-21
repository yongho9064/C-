/* 실행 결과가 다음과 같은 프로그램을 작성하시오. 다만, main() 함수를 포함하여 세개의
    사용자 정의 함수를 사용해야 한다. */
#include <iostream>
void three();
void see();

int main(){
    three();
    three();
    see();
    see();   

    return 0;
}
void three(){
    std::cout << "Three blind mice" << std::endl;
}
void see(){
    std::cout << "See how they run" << std::endl;
}