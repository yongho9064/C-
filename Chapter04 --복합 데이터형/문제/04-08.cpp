#include <iostream>
#include <string>
struct pizza{
    std::string name;
    double diameter;
    double weight;
};
int main(){
    using namespace std;
    pizza* piz = new pizza;
    cout << "������ ����:";
    (cin >> piz->diameter).get();
    cout << "������ �̸�:";
    getline(cin,piz->name);
    cout << "������ �߷�:";
    cin >> piz->weight;

    cout << "\n";

    cout << "������ �̸�:" << piz->name << endl;
    cout << "������ ����:" << piz->diameter << endl;
    cout << "������ �߷�:" << piz->weight << endl;

    delete piz;
    
    return 0;
}