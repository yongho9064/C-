// if ����
#include <iostream>
int main(){
    using std::cin;
    using std::cout;
    char ch;

    int spaces = 0;
    int total = 0;
    cin.get(ch);

    while(ch != '.'){
        if(ch == ' ')
            ++spaces;
        ++total;
        cin.get(ch);
    }

    cout << "�� ������ �� ���� ���� " << total << "�̰�. ";
    cout << "�� �߿��� ��ĭ�� " << spaces << "���Դϴ�.\n";
    return 0;
}