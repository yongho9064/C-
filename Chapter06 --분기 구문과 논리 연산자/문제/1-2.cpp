#include <iostream>
#include <array>
const int SIZE = 10;
int main(){
    using namespace std;
    array<double,SIZE> money;
    int sum = 0;
    int count = 0;

    for(int i = 0; i < SIZE; i++){
        cout << i+1 << "���� �մ� ��α�:";
        cin >> money[i];

        if(cin.fail()){
            cout << "���������� ���� ���� ���α׷��� �������� �ϰڽ��ϴ�.\n";
            return 0; 
        }
        sum += money[i];
    }
    
    int avg = sum / SIZE;

    cout << "��α� ���:" << avg << endl << endl;

    cout << "��α��� ��պ��� ���� �մ�\n" << endl;

    for(int i : money){
        if(avg < i){
            count++;
            cout << count << "���� �մ�:";
            cout << i << "��" << endl;
        }
    }
    
    cout << "�� ��պ��� ���� �մ���:" << count << "�� �Դϴ�.\n";

    return 0;
}