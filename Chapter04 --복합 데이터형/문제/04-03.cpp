#include <iostream>
#include <cstring>
int main(){
    using namespace std;

    char name[30];
    char sex[30];
    char str[100];

    cout << "�۽�Ʈ ����(�̸�)�� �Է��Ͻÿ�: ";
    cin.getline(name,30);
    cout << "��Ʈ ����(��)�� �Է��Ͻÿ�: ";
    cin.getline(sex,30);
    strcpy(str,sex);
    strcat(str,", ");
    strcat(str,name);
    cout << "�ϳ��� ���ڿ��� �����: " << str << endl;
    return 0;
}