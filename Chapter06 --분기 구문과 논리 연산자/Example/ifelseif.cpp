// if else if else
#include <iostream>
const int Fave = 27;
int main(){
    using namespace std;
    int n;

    cout << "1���� 100���� �������� �ϳ��� ���� �˾Ƹ����� �����Դϴ�.\n";
    cout << "���� �����ϴ� ���� �����ϱ��? ";

    do{
        cin >> n;
        if(n < Fave)    
            cout << "�װͺ��� Ů�ϴ�. �����ϱ��? ";
        else if(n > Fave)
            cout << "�װͺ��� �۽��ϴ�. �����ϱ��? ";
        else 
            cout << "�¾ҽ��ϴ�. ������ " << Fave << " �Դϴ�.\n"; 
    }while(n != Fave);
    return 0;
}