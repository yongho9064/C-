#include <iostream>
double function(double);
int main(){
    using namespace std;

    cout << "���� ���� �Է��ϰ� Enter Ű�� �����ʽÿ�:";
    double num = 0.0;
    cin >> num;

    double x = function(num);
    cout << num << " ������ " << x << "õ�� �����Դϴ�."; 
}
double function(double n){
    return n * 63240;
}