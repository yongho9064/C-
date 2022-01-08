#include <iostream>
#include <cmath>                        // cmath 헤더파일 포함시켜 함수 원형을 제공
int main(){
    using namespace std;

    double area;
    cout << "마루 면적을 평방피트 단위로 입력하시오:";
    cin >> area;
    double side;
    side = sqrt(area);                // cmath 헤더 파일의 함수 호출
    cout << "사각형 마루라면 한 변이 " << side
         << "피트에 상당합니다." <<endl;
    cout << "멋지네요!" << endl;
    return 0;
}