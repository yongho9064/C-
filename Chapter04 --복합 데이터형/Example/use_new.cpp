// new ������ ����ϱ�
#include <iostream>
int main(){
    using namespace std;
    int nights = 1001;
    int * pt = new int;     // int���� ������ �޸𸮸� ����
    *pt = 1001;             // ���Ե� �޸𸮿� ���� ����

    cout << "nights�� �� = ";
    cout << nights << ": �޸� ��ġ " << &nights << endl;
    cout << "int ��";
    cout << "�� = " << *pt << ": �޸� ��ġ = " << pt << endl;

    double * pd = new double;   // double���� ������ �޸𸮸� ����
    *pd = 10000001.0;           // �� �޸𸮿� double�� ���� ����

    cout << "double ��";
    cout << "�� = " << *pd << ": �޸� ��ġ = " << pd << endl;
    cout << "������ pd�� �޸� ��ġ: " << &pd << endl;
    cout << "pt�� ũ�� = " << sizeof(pt);
    cout << ": *pt�� ũ�� = " << sizeof(*pt) << endl;
    cout << "pd�� ũ�� = " << sizeof pd;
    cout << ": *pd�� ũ�� = " << sizeof(*pd) << endl;
    return 0;
}