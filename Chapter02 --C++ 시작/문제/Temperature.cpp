#include <iostream> 
int fahrenheit(int);
int main(){
    using namespace std;
    int celsius = 0;

    cout << "���� �µ��� �Է��ϰ� Enter Ű�� �����ʽÿ�:";
    cin >> celsius;

    int i = fahrenheit(celsius);
    cout << "���� " << celsius <<"���� ȭ���� " << i << "���Դϴ�.";

    return 0;
}
int fahrenheit(int i){
    return 1.8 * i + 32.0;
}