#include <iostream>
using namespace std;
double add(double x, double y);
double sub(double x, double y);
double div(double x, double y);
double mul(double x, double y);
double calculater(double x, double y, double (*ps)(double, double));
int main(){
    double x, y;
    double q;
    int choice;
    double (*gather[4])(double x, double y) = {add, sub, div, mul};
    cout << "�μ��� �Է��Ͻÿ�:";
    //cin >> x >> y;

    while(cin >> x >> y){
        cout << "����: (1)���ϱ�, (2)����, (3)������, (4)���ϱ�: ";
        cin >> choice;
        switch(choice){
            case 1:
                q = calculater(x, y, gather[0]);
                break;
            case 2:
                q = calculater(x, y, gather[1]);
                break;
            case 3:
                q = calculater(x, y, gather[2]);
                break;
            case 4:
                q = calculater(x, y, gather[3]);
                break;
            default:
                cout << "�߸��Է��ϼ̽��ϴ�. ���α׷��� �����մϴ�.";
                return 0;
        }
        cout << "���: " << q << endl;
        cout << "�μ��� �Է��Ͻÿ�:";
    }
    cout << "����" << endl;
    return 0;
}
double add(double x, double y){
    return x + y;
}
double sub(double x, double y){
    return x - y;
}
double div(double x, double y){
    return x / y;
}
double mul(double x, double y){
    return x * y;
}
double calculater(double x, double y, double (*ps)(double x, double y)){
    return (*ps)(x, y);
}