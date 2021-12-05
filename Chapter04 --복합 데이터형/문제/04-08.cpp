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
    cout << "피자의 지름:";
    (cin >> piz->diameter).get();
    cout << "피자의 이름:";
    getline(cin,piz->name);
    cout << "피자의 중량:";
    cin >> piz->weight;

    cout << "\n";

    cout << "피자의 이름:" << piz->name << endl;
    cout << "피자의 지름:" << piz->diameter << endl;
    cout << "피자의 중량:" << piz->weight << endl;

    delete piz;
    
    return 0;
}