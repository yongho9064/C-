#include <iostream>
int main(){
    using namespace std;

    int n1 = 0;
    int count = 0;

    do{
        cout << "���� �Է��Ͻÿ�:";
        cin >> n1;
        cout << "ī��Ʈ:" << ++count << endl;
    }while(n1 != 0);

    return 0;
}