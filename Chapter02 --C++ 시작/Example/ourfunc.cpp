#include <iostream>
void simon(int);                // simon()�� ���� �Լ� ����

int main(){
    using namespace std;
    simon(3);                   // simon() �Լ��� ȣ���Ѵ�
    cout << "������ �ϳ� ���ÿ�: ";
    int count;
    cin >> count;
    simon(count);               // simon() �Լ��� �ٽ� ȣ���Ѵ�
    cout << "��!" << endl;
    return 0;
}
void simon(int n){
    using namespace std;
    cout << "Simon ��, �߰����� " << n << "�� �ε����." << endl;
}                               // void�� �Լ����� return ������ �ʿ� ����