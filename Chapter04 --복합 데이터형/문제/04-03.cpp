#include <iostream>
#include <cstring>
int main(){
    using namespace std;

    char name[30];
    char sex[30];
    char str[100];

    cout << "퍼스트 네임(이름)을 입력하시오: ";
    cin.getline(name,30);
    cout << "라스트 네임(성)을 입력하시오: ";
    cin.getline(sex,30);
    strcpy(str,sex);
    strcat(str,", ");
    strcat(str,name);
    cout << "하나의 문자열로 만들면: " << str << endl;
    return 0;
}