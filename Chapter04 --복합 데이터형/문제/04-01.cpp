#include <iostream>
int main(){
    using namespace std;

    char name[30];
    char sex[30];
    char score;
    int age;

    cout << "영문 퍼스트 네임(이름):";
    cin.getline(name,sizeof(name));
    cout << "영문 라스트 네임(성):";
    cin.getline(sex,sizeof(sex));
    cout << "학생이 원하는 학점:";
    cin >> score;
    cout << "나이:";
    cin >> age;

    cout << "성명:" << sex << ", " << name << endl;
    cout << "학점:" << char(score + 1) << endl;
    cout << "나이:" << age << endl;

    return 0;
}