#include <iostream>
int main(){
    using namespace std;

    const char * calendar[12] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};
    int sales[3][12] = {0};
    int sum = 0;

    cout << "월간 판매량\n";

    for(int i = 0; i < 3; i++){
        int year_sales = 0;
        cout << i + 1 << "년 누적 판매량\n";
        for(int j = 0; j < 12; j++){
            cout << calendar[j] << ": ";
            cin >> sales[i][j];
            year_sales += sales[i][j];
        }
        cout << i + 1 << "판매량:" << year_sales << endl;
        sum += year_sales;
    }

    cout << "연간 총 판매량:" << sum << endl;

    return 0;
}