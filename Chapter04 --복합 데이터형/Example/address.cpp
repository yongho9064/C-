// & �����ڷ� �ּҸ� �˾Ƴ���
#include <iostream>
int main(){
    using namespace std;

    int donuts = 6;
    double cups = 4.5;

    cout << "donuts�� �� = " << donuts;
    cout << ", donuts�� �ּ� = " << &donuts << endl;
    // ����: unsigned (&donuts)��
    // unsigned (&cups)�� ����� ���� �䱸�ϴ� ��쵵 �ִ�
    cout << "cups�� �� = " << cups;
    cout << ", cups�� �ּ� = " << &cups << endl;
    return 0;  
}