#include <iostream>
#include <string>
struct donator{
    std::string name;
    double money;
};
int main(){
    using namespace std;
    int n;

    cout << "����� ����� ���� �ΰ���?:";
    (cin >> n).get();

    donator * c1 = new donator[n];

    for(int i = 0; i < n; i++){
        cout << "������� �̸�:";
        getline(cin,c1[i].name);
        cout << "��α�:";
        (cin >> c1[i].money).get();
    }

    if(0 == n)
        cout << "����ڰ� �����ϴ�.\n";

    cout << "------��� �����-------\n";

    for(int i = 0; i < n; i++)
        if(c1[i].money >= 10000){
            cout << "�����:" << c1[i].name;
            cout << " ��α�:" << c1[i].money << endl;
        }
    
    cout << "------�Ҿ� �����-------\n";

    for(int i = 0; i < n; i++)
        if(c1[i].money < 10000){
            cout << "�����:" << c1[i].name;
            cout << " ��α�:" << c1[i].money << endl;
        }

    delete []c1;

    return 0;
}