#include <iostream>
int main(){
    using namespace std;

    int n;

    cout << "����� �� ���� �Է��Ͻʽÿ�: ";
    cin >> n;

    for(int i = 0; i < n ; i++){
        
        for(int j = 1; j < n - i; j++)
            cout << ".";
        for(int k = 0; k <= i; k++)
            cout << "*";
        
        cout << endl;
    }

    return 0;
}