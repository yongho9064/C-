#include <iostream>
#include <cmath>                        // cmath ������� ���Խ��� �Լ� ������ ����
int main(){
    using namespace std;

    double area;
    cout << "���� ������ �����Ʈ ������ �Է��Ͻÿ�:";
    cin >> area;
    double side;
    side = sqrt(area);                // cmath ��� ������ �Լ� ȣ��
    cout << "�簢�� ������ �� ���� " << side
         << "��Ʈ�� ����մϴ�." <<endl;
    cout << "�����׿�!" << endl;
    return 0;
}