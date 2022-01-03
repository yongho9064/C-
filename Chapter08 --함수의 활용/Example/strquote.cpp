// 서로 다른 설게
#include <iostream>
#include <string>
using namespace std;

string version1(const string& s1, const string& s2);
const string& version2(string& s1, const string& s2);   // 부수효과
const string& version3(string& s1, const string& s2);   // 나쁜 설계

int main(){
    string input;
    string copy;
    string result;

    cout << "문자를 입력하시오: ";
    getline(cin, input);
    copy = input;
    cout << "입력한 문자열: " << input << endl;
    result = version1(input, "***");
    cout << "바뀐 문자열: " << result << endl;
    cout << "원래 문자열: " << input << endl;

    result = version2(input, "###");
    cout << "바뀐 문자열: " << result << endl;
    cout << "원래 문자열: " << input << endl;

    cout << "원래 문자열 재설정\n";
    input = copy;
    result = version3(input, "@@@");
    cout << "바뀐 문자열: " << result << endl;
    cout << "원래 문자열: " << input << endl;

    return 0;
}

string version1(const string & s1, const string & s2){
    string temp;

    temp = s2 + s1 + s2;
    return temp;
}

const string & version2(string &s1, const string& s2){       // 부수효과
    s1 = s2 + s1 + s2;
    return s1;
}

const string & version3(string &s1, const string &s2){       // 나쁜 설계
    string temp;

    temp = s2 + s1 + s2;
    return temp;
}