// continue�� break
#include <iostream>
const int ArSize = 80;
int main(){
    using namespace std;
    char line[ArSize];
    int spaces = 0;

    cout << "�� ���� �ؽ�Ʈ�� �Է��Ͻʽÿ�:\n";
    cin.get(line,ArSize);
    cout << "��ü �ؽ�Ʈ:\n" << line << endl;
    cout << "ù ��ħǥ������ �ؽ�Ʈ:\n";

    for(int i = 0; line[i] != '\0'; i++){
        cout << line[i];
        if(line[i] == '.')
            break;
        if(line[i] != ' ')
            continue;
        spaces++;
    }
    cout << "\n��ĭ ���ڴ� " << spaces << "���Դϴ�.\n";
    cout << "����.\n";
    return 0;
}