// �����͸� �ʱ�ȭ�Ѵ�
#include <iostream>
int main(){
    using namespace std;
    int higgens = 5;
    int * pt = &higgens;

    cout << "higgens�� �� = " << higgens
         << ", higgens�� �ּ� = " << &higgens << endl;
    cout << "*pt�� �� = " << *pt
         << ", pt�� �� = " << pt << endl;
    return 0;
}