#include <iostream>
#include <array>
int main(){
    using namespace std;
    int count = 0;

    array<double,3>run;

    cout << "1ȸ �޸��� ���:";
    cin >> run[0];
    count++;
    cout << "2ȸ �޸��� ���:";
    cin >> run[1];
    count++;
    cout << "3ȸ �޸��� ���:";
    cin >> run[2];
    count++;

    double avg = run[0] + run[1] + run[2];

    cout << "Ƚ��:" << count << endl; 
    cout << "���:" << avg / 3 << endl;

    return 0;
}

