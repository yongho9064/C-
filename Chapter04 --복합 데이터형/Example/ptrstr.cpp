// ���ڿ��� �����ϴ� �������� ���
#include <iostream>
#include <cstring>
int main(){
    using namespace std;

    char animal[20] = "bear";        // animal�� bear�� ����ִ�
    const char * bird = "wren";      // bird�� ���ڿ��� �ּҰ� ��� �ִ�
    char * ps;                       // �ʱ�ȭ���� �ʾҴ�

    cout << animal << " and ";        // bear�� ����Ѵ�
    cout << bird << "\n";             // wren�� ����Ѵ�
    // cout << ps << "\n";            // �����⸦ ����ϰų� ������ �� ���� �ִ�

    cout << "������ ������ �Է��Ͻʽÿ�: ";
    cin >> animal;                    // �Է��� 20���� �̳����� �Ѵ�
    // cin >> ps;                      // ����� �ؼ��� �� �� ��û�� �Ǽ��̴�
    // ps�� ���Ե� ������ �����ϰ� ���� �ʴ�

    ps = animal;                        // ps�� ���ڿ��� �����ϵ��� �����Ѵ�
    cout << ps << "s!\n";               // �´�, animal�� ����ϴ� �Ͱ� ����
    cout << "strcpy() �����:\n";
    cout << (int *) animal << ": " << animal << endl;
    cout << (int *) ps << ": " << ps << endl;

    ps = new char[strlen(animal) + 1];  // �� �޸𸮸� �����Ѵ�
    strcpy(ps,animal);                  // �� �޸𸮿� ���ڿ� ����
    cout << "strcpy() �����:\n";
    cout << (int *) animal << ": " << animal << endl;
    cout << (int *) ps << ": " << ps << endl;
    delete[] ps;
    return 0;
}
