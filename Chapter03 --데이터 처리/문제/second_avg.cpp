#include <iostream>
const int DAY_86400 = 86400;
const int HOUR_3600 = 3600;
const int MIN_60 = 60;
int main(){
    using namespace std;
    long second = 0;

    short day = 0;
    short h = 0;
    short min = 0;
    short sec = 0;

    cout << "�� ���� �Է��Ͻÿ�:";
    cin >> second;

    day = second / DAY_86400;
    h = second % DAY_86400 / HOUR_3600;
    min = second % HOUR_3600 / MIN_60;
    sec = second % MIN_60;
    
    cout << day << "��, " << h << "�ð�, " << min << "��, "<< sec << "��"; 

    return 0;
}