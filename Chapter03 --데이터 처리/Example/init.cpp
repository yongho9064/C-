//���� �������� �Ͼ�� �������� ��ȯ
#include <iostream>
int main(){
    using namespace std;
    cout.setf(ios_base::fixed, ios_base::floatfield);
    float tree = 3;                                     // int���� float������ ��ȯ
    int guess = 3.9832;                                 // float���� int������ ��ȯ
    int debt = 7.2E12;                                  // ����� ������ �� ����
    cout << "true = " << true << endl;
    cout << "guess = " << guess << endl;
    cout << "debt = " << debt << endl;
    return 0; 
}