#include <iostream>
int main(){
    using namespace std;

    int num1, num2;
    int sum = 0;

    cout << "�ΰ��� ������ �Է��Ͻÿ�:";
    cin >> num1 >> num2;

    for(int i = num1; i <= num2; i++)
        sum += i;

    cout << "�հ�:" << sum << endl;

    return 0;
}