#include <iostream>
int main(){
    using namespace std;
    char ch;

     cout << "���� ���� ���� �߿��� �ϳ��� �����Ͻʽÿ�. (�������� q)\n"
             << "c) camera \t p)pianist\n"
             << "t) tree \t g) game\n";

    while(cin >> ch && ch != 'q'){
        switch(ch){
            case 'c': cout << "ī�޶� �׽��ϴ�.\n"; break;
            case 'p': cout << "����� �ǾƴϽ�Ʈ\n"; break;
            case 't': cout << "��ǳ������ ���� ��ó�� ������ϴ�.\n"; break;
            case 'g': cout << "������ �׽��ϴ�.\n"; break;
            default: cout << "c, p, t, g �߿��� �ϳ��� �����Ͻʽÿ�. (�������� q):";
        }
    }
    return 0;
}