// get() & get()���� ���� �ܾ �д´�
#include <iostream>
int main(){
    using namespace std;
    const int ArSize = 20;
    char name[ArSize];
    char dessert[ArSize];

    cout << "�̸��� �Է��Ͻʽÿ�:\n";
    cin.get(name,ArSize).get();                 // ���ڿ�, ���� ���ڸ� �д´�
    cout << "�����ϴ� ����Ʈ�� �Է��Ͻʽÿ�:\n";
    cin.get(dessert,ArSize).get();
    cout << "���ִ� " << dessert;
    cout << " ����Ʈ�� �غ��ϰڽ��ϴ�. " << name << "��!\n";
    return 0;
}