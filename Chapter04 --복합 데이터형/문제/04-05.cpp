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

    cout << "상표명:" << snack.mark_name << endl;
    cout << "중량:" << snack.weight << endl;
    cout << "칼로리:" << snack.calorie << endl;

    return 0;
}