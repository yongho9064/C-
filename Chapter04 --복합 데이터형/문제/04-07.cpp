#include <iostream>
#include <string>
struct pizza{
    std::string name;
    double diameter;
    double weight;
};
int main(){
    using namespace std;

    struct pizza piz;
    cout << "���� ȸ���� �̸�:";
    getline(cin, piz.name);
    cout << "������ ����:";
    cin >> piz.diameter;
    cout << "������ �߷�:";
    cin >> piz.weight;

    cout << "���� ȸ���� �̸�:" << piz.name << endl;
    cout << "������ ����:" << piz.diameter << endl;
    cout << "������ �߷�:" << piz.weight << endl;

    return 0;
}