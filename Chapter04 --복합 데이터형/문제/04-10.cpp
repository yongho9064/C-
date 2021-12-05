#include <iostream>
#include <array>
int main(){
    using namespace std;
    int count = 0;

    array<double,3>run;

    cout << "1회 달리기 결과:";
    cin >> run[0];
    count++;
    cout << "2회 달리기 결과:";
    cin >> run[1];
    count++;
    cout << "3회 달리기 결과:";
    cin >> run[2];
    count++;

    double avg = run[0] + run[1] + run[2];

    cout << "횟수:" << count << endl; 
    cout << "평균:" << avg / 3 << endl;

    return 0;
}

