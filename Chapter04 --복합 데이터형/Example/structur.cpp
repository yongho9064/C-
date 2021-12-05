// 간단한 구조체
#include <iostream>
struct inflatable{
    char name[20];
    float volume;
    double price;
};
int main(){
    using namespace std;
    inflatable guest = {
        "Glorious Gloria",  // name 값
        1.88,               // volume 값
        29.99               // price 값
    };                      // guest는 inflatable형의 구조체 변수이다

    inflatable pa1 = {
        "Audacious Arthur",
        3.12,
        32.99
    };                      // pa1은 inflatable형의 두 번쨰 변수이다
    // 참고: 어떤 C++ 시스템에서는 다음과 같은 형식을 요구한다
    // static inflatable guest = 

    cout << "지금 판매하고 있는 모형풍선은\n" << guest.name;
    cout << "와 " << pa1.name << "입니다.\n";
    //pa1.name은 pa1 변수의 name 멤버이다
    cout << "두 제품을 $";
    cout << guest.price + pa1.price << "에 드리겠습니다!\n";
    return 0;
}