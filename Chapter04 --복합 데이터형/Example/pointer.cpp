// ó������ ���� ������ ����
#include <iostream>
int main(){
    using namespace std;
    int updates = 6;                            // int�� ������ ����
    int * p_updates;                            // int���� �����ϴ� �����͸� ����

    p_updates = &updates;                       // int���� �ּҸ� �����Ϳ� ����

    // ���� �� ���� ������� ǥ��
    cout << "��: updates = " << updates;
    cout << ", *p_updates = " << *p_updates << endl;

    // �ּҸ� �� ���� ������� ǥ��
    cout << "�ּ�: &updates = " << &updates;
    cout << ", p_updates = " << p_updates << endl;

    // �����͸� ����Ͽ� ���� ����
    *p_updates = *p_updates + 1;
    cout << "����� updates = " << updates << endl;
    return 0;
}