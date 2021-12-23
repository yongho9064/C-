#include <iostream>
using namespace std;
const int SLEN = 30;
struct student{
    char fullname[SLEN];
    char hobby[SLEN];
    int ooplevel;
};
int getinfo(student pa[], int n);
void display1(student st);
void display2(const student* ps);
void display3(const student pa[], int n);
int main(){
    cout << "학급의 학생 수를 입력하세요: ";
    int class_size;
    (cin >> class_size).get();

    student* ptr_stu = new student[class_size];
    int entered = getinfo(ptr_stu, class_size);
    for (int i = 0; i < entered; i++){
        display1(ptr_stu[i]);
        display2(&ptr_stu[i]);
    }
    display3(ptr_stu, entered);
    cout << "프로그램을 종료합니다.\n";
    delete[] ptr_stu;
    return 0;
}
int getinfo(student *pa, int n){
    int count = 0;
    cout << "\n학생들의 데이터\n\n";

    for (int i = 0; i < n; i++){
        cout << i + 1 << "번쨰 학생의 이름:";
        cin >> pa[i].fullname;
        if(cin.get() == ' ')
            break;
        cout << "취미:";
        cin.getline(pa[i].hobby, SLEN);
        cout << "oop레벨:";
        cin >> pa[i].ooplevel;
        cout << endl;
        count++;
    }
    cout << "\n데이터 입력 종료\n";
    return count;
}
void display1(student st){
    cout << "----------------" << endl;
    cout << "학생이름: " << st.fullname << endl;
    cout << "학생 취미: " << st.hobby << endl;
    cout << "학생 oop레벨: " << st.ooplevel << endl;
    cout << "----------------" << endl;
}
void display2(const student * ps){
    cout << "----------------" << endl;
    cout << "학생이름: " << ps->fullname << endl;
    cout << "학생 취미: " << ps->hobby << endl;
    cout << "학생 oop레벨: " << ps->ooplevel << endl;
    cout << "----------------" << endl;
}
void display3(const student pa[], int n){
    for (int i = 0; i < n; i++){
        cout << "----------------" << endl;
        cout << "학생이름: " << pa[i].fullname << endl;
        cout << "학생 취미: " << pa[i].hobby << endl;
        cout << "학생 oop레벨: " << pa[i].ooplevel << endl;
        cout << "----------------" << endl;
    }
}