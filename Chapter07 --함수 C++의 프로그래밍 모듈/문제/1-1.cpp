#include <iostream>
using namespace std;
double result(double x, double y);
int main(){
    double x, y;
    while(1){
        
        cout << "(�������� ��� �ϳ��� 0�� �Է�)\n";
        cout << "�μ��� �Է��Ͻÿ�:";
        cin >> x >> y;

        if(x == 0 || y == 0)
            break;

        cout << "(" << x << ", " << y << ")�� ��ȭ�� �����" << result(x, y) << "�Դϴ�.\n";
    }
    cout << "����" << endl;
    return 0;
}
double result(double x, double y){
    return 2.0 * x * y / (x + y);
}