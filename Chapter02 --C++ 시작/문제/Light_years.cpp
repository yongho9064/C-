#include <iostream>
double function(double);
int main(){
    using namespace std;

    cout << "광년 수를 입력하고 Enter 키를 누르십시오:";
    double num = 0.0;
    cin >> num;

    double x = function(num);
    cout << num << " 광년은 " << x << "천문 단위입니다."; 
}
double function(double n){
    return n * 63240;
}