#include <iostream>
int main(){
    using namespace std;

    double a = 100000;
    double b = 100000;
    int year = 1;

    while(a >= b){
        a += 10000;
        cout << year << "���� A��:" << a << "\t";
        b += b * 0.05;
        cout << year << "���� B��:" << b << endl;
        year++;
    }

    cout << "B���� A���� ���� ��ġ�� �ʰ��ϴ� �����:" << year - 1 << "���Դϴ�.\n";
    return 0;
}