// �����ڸ� ����Ͽ� �Ŀ�带 �������� ��ȯ�Ѵ�
#include <iostream>
int main(){
    using namespace std;
    const int Lbs_per_stn = 14;
    int lbs;

    cout << "����� ü���� �Ŀ�� ������ �Է��Ͻʽÿ�:";
    cin >> lbs;
    int stone = lbs / Lbs_per_stn;
    int pounds = lbs % Lbs_per_stn;
    cout << lbs << " �Ŀ��� " << stone 
         << " ����, " << pounds << " �Ŀ���Դϴ�.\n";
    return 0;     
}