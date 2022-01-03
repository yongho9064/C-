#include <iostream>
#include <cstring>
using namespace std;
struct CandyBar{
    char name[30];
    double weight;
    int calorie;
};
void function(CandyBar &c1, const char *name = "Millennium Munch", double weight = 2.85, int calorie = 350);
void show(const CandyBar &c1);
int main(){
    CandyBar c1;

    function(c1);
    show(c1);

    function(c1, "Hello World", 1.2, 400);
    show(c1);
}
void function(CandyBar &c1, const char* name, double weigth, int calorie){
    strcpy(c1.name, name);
    c1.weight = weigth;
    c1.calorie = calorie;
}
void show(const CandyBar &c1){
    cout << "상표명: " << c1.name << endl;
    cout << "중량: " << c1.weight << endl;
    cout << "칼로리: " << c1.calorie << endl;
}