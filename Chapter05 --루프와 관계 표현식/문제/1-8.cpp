#include <iostream>
#include <cstring>
int main(){
    using namespace std;
    char arr[500];
    int count = 0;

    cout << "���� �ܾ���� �Է��Ͻʽÿ�(�������� done�� �Է�):\n";

    do{
        cin >> arr;
        count++;
    }while(strcmp(arr,"done"));

    cout << "�� " << count - 1 << " �ܾ �ԷµǾ����ϴ�.";

    return 0;
}