#include <iostream>
int main(){
    using namespace std;

    const char * calendar[12] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};
    int sales[3][12] = {0};
    int sum = 0;

    cout << "���� �Ǹŷ�\n";

    for(int i = 0; i < 3; i++){
        int year_sales = 0;
        cout << i + 1 << "�� ���� �Ǹŷ�\n";
        for(int j = 0; j < 12; j++){
            cout << calendar[j] << ": ";
            cin >> sales[i][j];
            year_sales += sales[i][j];
        }
        cout << i + 1 << "�Ǹŷ�:" << year_sales << endl;
        sum += year_sales;
    }

    cout << "���� �� �Ǹŷ�:" << sum << endl;

    return 0;
}