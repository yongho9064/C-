// ���� �������� �ε� �Ҽ����� ������
#include <iostream>
int main(){
    using namespace std;
    cout.setf(ios_base::fixed, ios_base::floatfield);
    cout << "���� ������: 9/5 = " << 9 / 5 << endl;
    cout << "�ε� �Ҽ����� ������: 9.0/5.0 = ";
    cout << 9.0 / 5.0 << endl;
    cout << "ȥ�� ������: 9.0/5 = " << 9.0 / 5 << endl;
    cout << "double�� ���: le7/9.0 = ";
    cout << 1.e7 / 9.0 << endl;
    cout << "float�� ���: le7f/9.0f = ";
    cout << 1.e7f / 9.0f << endl;
    return 0;
}