// �迭�� ����Ͽ� ���ڿ� ��
#include <iostream>
#include <cstring>              // strcmp() �Լ��� ����
int main(){
    using namespace std;
    char word[5] = "?ate";

    for(char ch = 'a'; strcmp(word, "mate"); ch++){
        cout << word << endl;
        word[0] = ch;
    }
    cout << "������ ���� �Ŀ� �ܾ�� " << word << "�Դϴ�.\n";
    return 0;
}