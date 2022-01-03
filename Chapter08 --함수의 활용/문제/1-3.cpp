#include <iostream>
#include <string>
#include <cctype>
using namespace std;
void upper(string &str);
int main(){
    string str;
    cout << "문자열을 입력하시오 (끝내려면 q):";
    while(getline(cin, str) && str != "q"){
        upper(str);
        cout << "다음 문자열을 입력하시오 (끝내려면 q):";
    }
    cout << "끝." << endl;
}
void upper(string &str){
    int i = 0;
    while(str[i] != '\0')
        cout << (char)toupper(str[i++]);
    cout << endl;
}