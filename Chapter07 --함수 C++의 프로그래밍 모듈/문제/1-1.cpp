#include <iostream>
using namespace std;
double result(double x, double y);
int main(){
    double x, y;
    while(1){
        
        cout << "(끝내려면 어느 하나에 0을 입력)\n";
        cout << "두수를 입력하시오:";
        cin >> x >> y;

        if(x == 0 || y == 0)
            break;

        cout << "(" << x << ", " << y << ")의 조화의 평균은" << result(x, y) << "입니다.\n";
    }
    cout << "종료" << endl;
    return 0;
}
double result(double x, double y){
    return 2.0 * x * y / (x + y);
}