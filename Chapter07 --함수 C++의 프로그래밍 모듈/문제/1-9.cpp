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
    cout << "�б��� �л� ���� �Է��ϼ���: ";
    int class_size;
    (cin >> class_size).get();

    student* ptr_stu = new student[class_size];
    int entered = getinfo(ptr_stu, class_size);
    for (int i = 0; i < entered; i++){
        display1(ptr_stu[i]);
        display2(&ptr_stu[i]);
    }
    display3(ptr_stu, entered);
    cout << "���α׷��� �����մϴ�.\n";
    delete[] ptr_stu;
    return 0;
}
int getinfo(student *pa, int n){
    int count = 0;
    cout << "\n�л����� ������\n\n";

    for (int i = 0; i < n; i++){
        cout << i + 1 << "���� �л��� �̸�:";
        cin >> pa[i].fullname;
        if(cin.get() == ' ')
            break;
        cout << "���:";
        cin.getline(pa[i].hobby, SLEN);
        cout << "oop����:";
        cin >> pa[i].ooplevel;
        cout << endl;
        count++;
    }
    cout << "\n������ �Է� ����\n";
    return count;
}
void display1(student st){
    cout << "----------------" << endl;
    cout << "�л��̸�: " << st.fullname << endl;
    cout << "�л� ���: " << st.hobby << endl;
    cout << "�л� oop����: " << st.ooplevel << endl;
    cout << "----------------" << endl;
}
void display2(const student * ps){
    cout << "----------------" << endl;
    cout << "�л��̸�: " << ps->fullname << endl;
    cout << "�л� ���: " << ps->hobby << endl;
    cout << "�л� oop����: " << ps->ooplevel << endl;
    cout << "----------------" << endl;
}
void display3(const student pa[], int n){
    for (int i = 0; i < n; i++){
        cout << "----------------" << endl;
        cout << "�л��̸�: " << pa[i].fullname << endl;
        cout << "�л� ���: " << pa[i].hobby << endl;
        cout << "�л� oop����: " << pa[i].ooplevel << endl;
        cout << "----------------" << endl;
    }
}