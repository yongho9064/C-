#include <iostream>
int main(){
    using namespace std;

    char name[30];
    char sex[30];
    char score;
    int age;

    cout << "���� �۽�Ʈ ����(�̸�):";
    cin.getline(name,sizeof(name));
    cout << "���� ��Ʈ ����(��):";
    cin.getline(sex,sizeof(sex));
    cout << "�л��� ���ϴ� ����:";
    cin >> score;
    cout << "����:";
    cin >> age;

    cout << "����:" << sex << ", " << name << endl;
    cout << "����:" << char(score + 1) << endl;
    cout << "����:" << age << endl;

    return 0;
}