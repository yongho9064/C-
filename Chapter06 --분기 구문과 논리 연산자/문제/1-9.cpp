#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>
struct donator{
    std::string name;
    double money;
};
int main(){
    using namespace std;
    ifstream inFile;
    int n;

    inFile.open("1-9.txt");

    if(!(inFile.is_open())){
        cout << "파일을 열수없습니다!\n";
        cout << "시스템을 종료하겠습니다.\n";
        exit(EXIT_FAILURE);
    }

    cout << "기부할 사람은 몇사람 인가요?:";
    (inFile >> n).get();
    cout << n << endl;

    donator * c1 = new donator[n];

    for(int i = 0; i < n; i++){
        cout << "기부자의 이름:";
        getline(inFile,c1[i].name);
        cout << c1[i].name << endl;

        cout << "기부금:";
        (inFile >> c1[i].money).get();
        cout << c1[i].money << endl;
    }

    if(0 == n)
        cout << "기부자가 없습니다.\n";

    cout << "------고액 기부자-------\n";

    for(int i = 0; i < n; i++)
        if(c1[i].money >= 10000){
            cout << "기부자:" << c1[i].name;
            cout << " 기부금:" << c1[i].money << endl;
        }
    
    cout << "------소액 기부자-------\n";

    for(int i = 0; i < n; i++)
        if(c1[i].money < 10000){
            cout << "기부자:" << c1[i].name;
            cout << " 기부금:" << c1[i].money << endl;
        }

    delete []c1;

    return 0;
}