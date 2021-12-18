// 수가 아닌 입력은 무시한다
#include <iostream>
const int Max = 5;
int main(){
    using namespace std;

    int golf[Max];
    cout << "골프 점수를 입력하십시오.\n";
    cout << "총 " << Max << "라운드 점수를 입력해야 합니다.\n";
    int i;
    for(i = 0; i < Max; i++){
        cout << "round #" << i+1 << ": ";
        while (!(cin >> golf[i])){
            cin.clear();                                // 에러 플래그가 초기화
            while (cin.get() != '\n'){
                cout << "실행\n";
                continue;
            }
            cout << "골프 점수를 입력하십시오: ";
        }
    }

    double total = 0.0;
    for(i = 0; i < Max; i++)
        total += golf[i];

    cout << "총 " << Max << "라운드의 평균 점수 = "
         << total / Max << endl;
    
    return 0;
}