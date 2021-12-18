#include <iostream>
#include <string>
struct donator{
    std::string name;
    double money;
};
int main(){
    using namespace std;
    int n;

    cout << "기부할 사람은 몇사람 인가요?:";
    (cin >> n).get();

    donator * c1 = new donator[n];

    for(int i = 0; i < n; i++){
        cout << "기부자의 이름:";
        getline(cin,c1[i].name);
        cout << "기부금:";
        (cin >> c1[i].money).get();
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