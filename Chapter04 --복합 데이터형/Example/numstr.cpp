// ��ġ �Է� �ڿ� ���� ���ڿ�
#include <iostream>
int main(){
    using namespace std;
    cout << "���� ��ô� ����Ʈ�� ���� �����ϼ̽��ϱ�?\n";
    int year;
    cin >> year;                                        // (cin >> year).get() ���
    cout << "��ô� ���ø� ������ �ֽðڽ��ϱ�?\n";
    char address[80];
    cin.getline(address,80);
    cout << "����Ʈ ���� ����: " << year << endl;
    cout << "����: " << address << endl;
    cout << "����� �Ϸ�Ǿ����ϴ�!\n";
    return 0;
}