#include <iostream>
#include <string>
struct CandyBar{
    std::string mark_name;
    double weight;
    int calorie;
};
int main() {
    using namespace std;
    CandyBar snack = {"Mocha Munch", 2.3, 350};

    cout << "��ǥ��:" << snack.mark_name << endl;
    cout << "�߷�:" << snack.weight << endl;
    cout << "Į�θ�:" << snack.calorie << endl;

    return 0;
}