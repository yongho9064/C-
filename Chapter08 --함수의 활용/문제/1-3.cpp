#include <iostream>
#include <string>
#include <cctype>
using namespace std;
void upper(string &str);
int main(){
    string str;
    cout << "���ڿ��� �Է��Ͻÿ� (�������� q):";
    while(getline(cin, str) && str != "q"){
        upper(str);
        cout << "���� ���ڿ��� �Է��Ͻÿ� (�������� q):";
    }
    cout << "��." << endl;
}
void upper(string &str){
    int i = 0;
    while(str[i] != '\0')
        cout << (char)toupper(str[i++]);
    cout << endl;
}