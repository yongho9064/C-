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

    cout << "인기 1위 캔디바" << endl;
    cout << "상표명:" << snack[0].mark_name << endl;
    cout << "중 량:" << snack[0].weight << endl;
    cout << "칼로리:" << snack[0].calorie << endl;
    cout << "\n";
    cout << "인기 2위 캔디바" << endl;
    cout << "상표명:" << snack[1].mark_name << endl;
    cout << "중 량:" << snack[1].weight << endl;
    cout << "칼로리:" << snack[1].calorie << endl;
    cout << "\n";
    cout << "인기 3위 캔디바" << endl;
    cout << "상표명:" << snack[2].mark_name << endl;
    cout << "중 량:" << snack[2].weight << endl;
    cout << "칼로리:" << snack[2].calorie << endl;
}