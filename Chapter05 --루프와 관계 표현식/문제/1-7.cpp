#include <iostream>
struct car{
    char name[50];
    int year;
};
int main(){
    using namespace std;
    int n = 0;

    cout << "몇 대의 차를 목록으로 관리하시겠습니까? ";
    cin >> n;

    car * c1 = new car[n];

    for(int i = 0; i < n; i++){
        cout << "자동차 #" << i + 1 << ":\n";
        cout << "제작업체: ";
        (cin >> c1[i].name).get();
        cout << "제작년도: ";
        cin >> c1[i].year;
    }

    cout << "현재 귀하가 보유하고 있는 자동차 목록은 다음과 같습니다.\n";

    for(int i = 0; i < n; i++)
        cout << c1[i].year << "년형 " << c1[i].name << endl;
    
    delete []c1;

    return 0;
}