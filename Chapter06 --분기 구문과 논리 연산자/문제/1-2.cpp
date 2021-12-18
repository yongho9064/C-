#include <iostream>
#include <array>
const int SIZE = 10;
int main(){
    using namespace std;
    array<double,SIZE> money;
    int sum = 0;
    int count = 0;

    for(int i = 0; i < SIZE; i++){
        cout << i+1 << "번쨰 손님 기부금:";
        cin >> money[i];

        if(cin.fail()){
            cout << "비정상적인 값이 들어가서 프로그램을 강제종료 하겠습니다.\n";
            return 0; 
        }
        sum += money[i];
    }
    
    int avg = sum / SIZE;

    cout << "기부금 평균:" << avg << endl << endl;

    cout << "기부금이 평균보다 높은 손님\n" << endl;

    for(int i : money){
        if(avg < i){
            count++;
            cout << count << "번쨰 손님:";
            cout << i << "원" << endl;
        }
    }
    
    cout << "총 평균보다 높은 손님은:" << count << "명 입니다.\n";

    return 0;
}