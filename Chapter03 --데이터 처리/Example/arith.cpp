// C++�� ��� ����
#include <iostream>
int main(){
    using namespace std;
    float hats, heads;                  // ���� �Ҽ��� �������� ���

    cout.setf(ios_base::fixed, ios_base::floatfield);
    cout << "���� �ϳ� �Է��Ͻʽÿ�:";
    cin >> hats;
    cout << "�ٸ� ���� �Է��Ͻʽÿ�:";
    cin >> heads;

    cout << "hats = " << hats << "; heads = " << heads << endl;
    cout << "hats + heads = " << hats + heads << endl;
    cout << "hats - heads = " << hats - heads << endl;
    cout << "hats * heads = " << hats * heads << endl;
    cout << "hats / heads = " << hats / heads << endl;
    return 0; 
}