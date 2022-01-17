#include <iostream>
#include <string>
#include <cstring>
using namespace std;
class Person {
private:
    static const int LIMIT = 25;
    string lname;
    char fname[LIMIT];
public:
    Person() { lname = ""; fname[0] = '\0'; }
    Person(const string& ln, const char* fn = "Heyyou");
    void Show() const;          // 이름 성씨 형식
    void FormalShow() const;    // 성씨, 이름 형식 
};
void Person::Show() const{
    cout << "이름: " << fname << endl;
    cout << "성: " << lname << endl;
}
void Person::FormalShow() const{
    cout << "성: " << lname << endl;
    cout << "이름: " << fname << endl;
}
Person::Person(const string& ln, const char* fn) {
    lname = ln;
    strcpy(fname, fn);
}

int main() {
    Person one;
    Person two("Smythecraft");
    Person three("Dimwiddy", "Sam");
    
    one.Show();
    cout << endl;
    one.FormalShow();
    cout << endl;
    two.Show();
    cout << endl;
    two.FormalShow();
    cout << endl;
    three.Show();
    cout << endl;
    three.FormalShow();
    cout << endl;

    return 0;
}
