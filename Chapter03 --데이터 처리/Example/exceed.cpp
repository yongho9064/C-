#include <iostream>
#include <climits>
#define ZERO 0                                   // ��ó����  �� 0���� ��ü�� ��ȣ ��� ZERO�� �����Ѵ� 
int main(){
    using namespace std;
    short Dohee = SHRT_MAX;                     // ���� �ִ밪���� �ʱ�ȭ
    unsigned short Insuk = Dohee;               // Dohee�� ���ǵǾ� �����Ƿ� �´�

    cout << "������ ���¿���" << Dohee << "���� ��� �ְ�, ";
    cout << "�μ����� ���¿��� " << Insuk << "���� ��� �ִ�." << endl;
    cout << "������ ���¿� 1���� �Ա��Ѵ�." << endl << "���� ";
    Dohee = Dohee + 1;
    Insuk = Insuk + 1;
    cout << "������ �ܰ�� " << Dohee << "���� �Ǿ���, ";
    cout << "�μ����� �ܰ�� " << Insuk << "���� �Ǿ���." << endl;
    cout << "�̷� ����! ���� �� ���� ������ �߳�?" << endl;
    Dohee = ZERO;
    Insuk = ZERO;
    cout << "������ ���¿��� " << Dohee << "���� ��� �ְ�. ";
    cout << "�μ����� ���¿��� " << Insuk << "���� ��� �ִ�." << endl;
    cout << "������ ���¿��� 1���� �����Ѵ�." << endl << "���� ";
    Dohee = Dohee - 1;
    Insuk = Insuk - 1;
    cout << "������ �ܰ�� " << Dohee << "���� �Ǿ���. ";
    cout << "�μ����� �ܰ�� " << Insuk << "���� �Ǿ���." << endl;
    cout << "�̷� ����! �μ��̰� ���ǿ� ��÷�Ǿ���?" << endl;
    return 0;
}