// ���� ������
#include <iostream>
int main(){
    using namespace std;
    int a,b;
    cout << "�� ���� ������ �Է��Ͻÿ�: ";
    cin >> a >> b;
    cout << "�� �߿��� �� ū ������ ";
    int c = a > b ? a : b;
    cout << c << "�Դϴ�.\n";
    return 0;
}