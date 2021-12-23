#include <iostream>
using namespace std;
double add(double x, double y);
double sub(double x, double y);
double div(double x, double y);
double mul(double x, double y);
double calculater(double x, double y, double (*ps)(double, double));
int main(){
    double x, y;
    double q;
    int choice;
    double (*gather[4])(double x, double y) = {add, sub, div, mul};
    cout << "두수를 입력하시오:";
    //cin >> x >> y;

    while(cin >> x >> y){
        cout << "선택: (1)더하기, (2)뼤기, (3)나누기, (4)곱하기: ";
        cin >> choice;
        switch(choice){
            case 1:
                q = calculater(x, y, gather[0]);
                break;
            case 2:
                q = calculater(x, y, gather[1]);
                break;
            case 3:
                q = calculater(x, y, gather[2]);
                break;
            case 4:
                q = calculater(x, y, gather[3]);
                break;
            default:
                cout << "잘못입력하셨습니다. 프로그램을 종료합니다.";
                return 0;
        }
        cout << "결과: " << q << endl;
        cout << "두수를 입력하시오:";
    }
    cout << "종료" << endl;
    return 0;
}
double add(double x, double y){
    return x + y;
}
double sub(double x, double y){
    return x - y;
}
double div(double x, double y){
    return x / y;
}
double mul(double x, double y){
    return x * y;
}
double calculater(double x, double y, double (*ps)(double x, double y)){
    return (*ps)(x, y);
}