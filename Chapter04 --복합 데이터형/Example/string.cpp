// �迭�� ���ڿ��� �����Ѵ�
#include <iostream>
#include <cstring>                          // strlen() �Լ��� ����ϱ� ����
int main(){
    using namespace std;
    const int Size = 15;
    char name1[Size];                       // ��� �ִ� �迭
    char name2[Size] = "C++owboy";          // ���ڿ� ����� �ʱ�ȭ�� �迭
    // ����: � C++������ name2 �迭�� �ʱ�ȭ�ϱ� ����
    // static Ű���带 ����ؾ� �Ѵ�

    cout << "�ȳ��ϼ���! ���� " << name2;
    cout << "�Դϴ�! �Ƿ����� ������?\n";
    cin >> name1;
    cout << "��!," << name1 << " ��! ����� �̸��� ";
    cout << strlen(name1) << "���Դϴٸ� \n";
    cout << sizeof(name1) << "����Ʈ ũ���� �迭�� ����Ǿ����ϴ�.\n";
    cout << "�̸��� " << name1[0] << "�ڷ� �����ϴ±���.\n";
    name2[3] = '\0';                        // �� ����
    cout << "�� �̸��� ó�� �� ���ڴ� ������ �����ϴ�:";
    cout << name2 << endl;
    return 0;
}