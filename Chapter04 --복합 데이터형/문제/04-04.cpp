#include <iostream>
#include <string>
int main(){
    using namespace std;
    string name;
    string sex;
    string str;

    cout << "�۽�Ʈ ����(�̸�)�� �Է��Ͻÿ�:";
    getline(cin,name);
    cout << "��Ʈ ����(��)�� �Է��Ͻÿ�:";
    getline(cin,sex);
    cout << "�ϳ��� ���ڿ��� �����:";
    str = sex + ", " + name;
    cout << str;

    return 0;
}