// while ���� �Թ�
#include <iostream>
const int ArSize = 20;
int main(){
    using namespace std;
    char name[ArSize];

    cout << "���� �̸��� �Է��Ͻʽÿ�:";
    cin >> name;
    cout << "������ ���� �̸��� �� �ٿ� ���ھ�\n";
    cout << "ASCII �ڵ�� �Բ� ǥ���ϸ� �̷����ϴ�.\n";
    int i = 0;                                          // ���ڿ��� ù�Ӹ����� ����
    while(name[i] != '\0'){
        cout << name[i] << ": " << int(name[i]) << endl;
        i++;
    }
    return 0;
}