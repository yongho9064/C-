// �Լ� ������ �Լ� ȣ��
#include <iostream>
void cheers(int);
double cube(double x);
int main(){
    using namespace std;
    cheers(5);
    cout << "�ϳ��� ���� �Է��Ͻʽÿ�:";
    double side;
    cin >> side;
    double volume = cube(side);
    cout << "�� ���� ���̰�" << side << " ��Ƽ������ ������ü��  ���Ǵ� ";
    cout << volume << " ��������Ƽ���� �Դϴ�.\n";
    cheers(cube(2));
    return 0;
}
void cheers(int n){
    using namespace std;
    for (int i = 0; i < n; i++)
        cout << "Cheers! ";
    cout << endl;
}
double cube(double x){
    return x * x * x;
}