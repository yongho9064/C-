#include <iostream>
using namespace std;
#include <cstring>          // strlen(), strcpy()�� ����ϱ� ����
struct stringy{
    char* str;              // ���ڿ��� �����Ѵ�
    int ct;                 // ���ڿ��� ����('\0'�� ����)
};
// set(), show()�� ������, show() �Լ��� �� �ڸ��� �ִ´�
void set(stringy& beany, const char* testing);
void show(const stringy& beany, int count = 1);
void show(const char* testing, int count = 1);

int main() {
    stringy beany;
    char testing[] = "Reality isn't what it used to be.";

    set(beany, testing);
        // ù ���� �Ű������� �����̴�
        // testing�� �纻�� ������ ������ �����Ѵ�
        // beany�� str ����� �� ����� �����ϵ��� �����Ѵ�
        // testing�� ����Ͽ� �����Ѵ�
        // beany�� ct ����� �����Ѵ�

    show(beany);                            // ���ڿ� ����� �� �� ����Ѵ�
    show(beany, 2);                         // ���ڿ� ����� �� �� ����Ѵ�
    testing[0] = 'D';
    testing[1] = 'u';
    show(testing);              // testing ���ڿ��� �ѹ� ����Ѵ�
    show(testing, 3);           // testing ���ڿ��� �� �� ����Ѵ�
    show("Done!");
    return 0;
}
void set(stringy &beany, const char* testing){
    beany.ct = (strlen(testing) - 1);
    char* arr = new char[beany.ct];;
    beany.str = arr;
    strcpy(arr, testing);
}
void show(const stringy &beany, int count){
    for(int i = 0; i < count; i++)
        cout << beany.str << endl;
}
void show(const char* testing, int count){
    for (int i = 0; i < count; i++)
        cout << testing << endl;
}