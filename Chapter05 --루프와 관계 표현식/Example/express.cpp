// ǥ������ ��
#include <iostream>
int main(){
    using namespace std;
    
    int x;

    cout << "���� ǥ���� x = 100�� ���� ";
    cout << (x = 100) << endl;                  // << ������ �켱������ �� ���� ������ ��ȣ�� �ؾ��Ѵ�.
    cout << "���� x�� ���� " << x << endl;
    cout << "���� ǥ���� x < 3�� �������� ";
    cout << (x < 3) << endl;
    cout << "���� ǥ���� x > 3�� �������� ";
    cout << (x > 3) << endl;
    cout.setf(ios_base::boolalpha);         // �ֽ� C++ ���
    cout << "���� ǥ���� x < 3�� bool���� ";
    cout << (x < 3) << endl;
    cout << "���� ǥ���� x > 3�� bool���� ";
    cout << (x > 3) << endl;
    return 0;

}