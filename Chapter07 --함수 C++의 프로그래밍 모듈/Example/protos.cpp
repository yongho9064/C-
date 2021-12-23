// 함수 원형과 함수 호출
#include <iostream>
void cheers(int);
double cube(double x);
int main(){
    using namespace std;
    cheers(5);
    cout << "하나의 수를 입력하십시오:";
    double side;
    cin >> side;
    double volume = cube(side);
    cout << "한 변의 길이가" << side << " 센티미터인 정육면체의  부피는 ";
    cout << volume << " 세제곱센티미터 입니다.\n";
    cheers(cube(2));
    return 0;
}
void cheers(int n){
    using namespace std;
    for (int i = 0; i < n; i++)
        cout << "Cheers! ";
    cout << endl;
}
double cube(double x){
    return x * x * x;
}