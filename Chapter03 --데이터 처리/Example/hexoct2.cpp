#include <iostream>
int main(){
    using namespace std;
    int chest = 42;
    int waist = 42;
    int inseam = 42;

    cout << "�մ� ���Ŵ� �Ѹ���� ���� �ݴϴ�!" << endl;
    cout << "�����ѷ�" << chest << " (10����)" << endl;
    cout << hex;                                            // 16�������� �ٲٴ� ������
    cout << "�㸮�ѷ� " << waist << " (16����)" << endl;
    cout << oct;                                            // 8�������� �ٲٴ� ������
    cout << "�νɱ��� " << inseam << " (8����)" << endl;       
    cout << dec;                                            // 10�������� �ٲٴ� ������

    return 0;
}