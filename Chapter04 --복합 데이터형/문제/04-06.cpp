#include <iostream>
#include <string>
struct CandyBar{
    std::string mark_name;
    double weight;
    int calorie;
};
int main(){
    using namespace std;
    CandyBar snack[3] = {
        {"Mocha munch", 2.3, 350},
        {"Green Melon", 2.7, 320},
        {"Sweet Peanut", 2.5, 330},
    };

    cout << "�α� 1�� ĵ���" << endl;
    cout << "��ǥ��:" << snack[0].mark_name << endl;
    cout << "�� ��:" << snack[0].weight << endl;
    cout << "Į�θ�:" << snack[0].calorie << endl;
    cout << "\n";
    cout << "�α� 2�� ĵ���" << endl;
    cout << "��ǥ��:" << snack[1].mark_name << endl;
    cout << "�� ��:" << snack[1].weight << endl;
    cout << "Į�θ�:" << snack[1].calorie << endl;
    cout << "\n";
    cout << "�α� 3�� ĵ���" << endl;
    cout << "��ǥ��:" << snack[2].mark_name << endl;
    cout << "�� ��:" << snack[2].weight << endl;
    cout << "Į�θ�:" << snack[2].calorie << endl;
}