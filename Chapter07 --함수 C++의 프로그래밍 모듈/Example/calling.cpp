// �Լ�����, �Լ� ����, �Լ� ȣ��
#include <iostream>
void simple();
int main(){
    using namespace std;
    cout << "main()���� simple() �Լ��� ȣ���մϴ�:\n";
    simple();
    cout << "main()�� simple() �Լ��� ����˴ϴ�.\n";
    return 0;
}

void simple(){
    using namespace std;
    cout << "����� simple() �Լ��Դϴ�.\n";
}