#include <iostream>
int main(){
    using namespace std;

    const char * calendar[12] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};
    int sales[12] = {0};
    int sum = 0;

    cout << "���� �Ǹŷ�\n";

    for(int i = 0; i < 12; i++){
        cout << calendar[i] << ": ";
        cin >> sales[i];  
    }

    for(int i: sales)
        sum += i;

    cout << "���� �� �Ǹŷ�:" << sum << endl;

    return 0;
}