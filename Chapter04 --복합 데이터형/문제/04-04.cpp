#include <iostream>
#include <string>
int main(){
    using namespace std;
    string name;
    string sex;
    string str;

    cout << "퍼스트 네임(이름)을 입력하시오:";
    getline(cin,name);
    cout << "라스트 네임(성)을 입력하시오:";
    getline(cin,sex);
    cout << "하나의 문자열로 만들면:";
    str = sex + ", " + name;
    cout << str;

    return 0;
}