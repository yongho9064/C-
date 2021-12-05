#include <iostream>
#include <cstring>
struct CandyBar{
    char name[30];
    double weight;
    double calorie;
};
int main(){
    using namespace std;
    CandyBar* snack = new CandyBar[3];
    strcpy(snack[0].name, "Mocha Munch");
	snack[0].weight = 2.3;
	snack[0].calorie = 350;
	strcpy(snack[1].name, "Green Melon");
	snack[1].weight = 2.7;
	snack[1].calorie = 320;
	strcpy(snack[2].name, "Sweet Peanut");
	snack[2].weight = 2.5;
	snack[2].calorie = 330;

    cout << "인기 1위 캔디바" << endl;
	cout << "상표명 : " << snack[0].name << endl;
	cout << "중  량 : " << snack[0].weight << " g" << endl;
	cout << "칼로리 : " << snack[0].calorie << " cal" << endl;
	cout << "\n";
	cout << "인기 2위 캔디바" << endl;
	cout << "상표명 : " << snack[1].name << endl;
	cout << "중  량 : " << snack[1].weight << " g" << endl;
	cout << "칼로리 : " << snack[1].calorie << " cal" << endl;
	cout << "\n";
	cout << "인기 3위 캔디바" << endl;
	cout << "상표명 : " << snack[2].name << endl;
	cout << "중  량 : " << snack[2].weight << " g" << endl;
	cout << "칼로리 : " << snack[2].calorie << " cal" << endl;
	delete [] snack;

	return 0;
}