#include <iostream>
int main(){
    using namespace std;

    double a = 100000;
    double b = 100000;
    int year = 1;

    while(a >= b){
        a += 10000;
        cout << year << "년후 A고객:" << a << "\t";
        b += b * 0.05;
        cout << year << "년후 B고객:" << b << endl;
        year++;
    }

    cout << "B고객이 A고객의 투자 가치를 초과하는 년수는:" << year - 1 << "년입니다.\n";
    return 0;
}