#include <iostream>
#include <string>
int main(){
    using namespace std;
    int count = 0;
    string arr;

    cout << "���� �ܾ���� �Է��Ͻʽÿ�(�������� done�� �Է�):\n";
    
    while (cin >> arr && arr != "done")
        count++;

    cout << "�� " << count << " �ܾ �ԷµǾ����ϴ�.";
    return 0;
}