// �·� ���ϱ�
#include <iostream>
long double probability(unsigned numbers, unsigned picks);
int main(){
    using namespace std;
    double total, choices;

    cout << "��ü ���� ������ ���� ���� ������ �Է��Ͻʽÿ�:\n";
    while((cin >> total >> choices) && choices <= total){
        cout << "����� �̱� Ȯ���� ";
        cout << probability(total, choices);
        cout << "�� �߿��� �� ���Դϴ�.\n";
        cout << "�ٽ� �� ���� �Է��Ͻʽÿ�. (�������� q�� �Է�):";
    }
    cout << "���α׷��� �����մϴ�.\n";
    return 0;
}
long double probability(unsigned numbers, unsigned picks){
    long double result = 1.0;
    long double n;
    unsigned p;

    for (n = numbers, p = picks; p > 0; n--, p--)
        result = result * n / p;
        
    return result;
}