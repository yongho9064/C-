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
    cout << "피자 회사의 이름:";
    getline(cin, piz.name);
    cout << "피자의 지름:";
    cin >> piz.diameter;
    cout << "피자의 중량:";
    cin >> piz.weight;

    cout << "피자 회사의 이름:" << piz.name << endl;
    cout << "피자의 지름:" << piz.diameter << endl;
    cout << "피자의 중량:" << piz.weight << endl;

    return 0;
}