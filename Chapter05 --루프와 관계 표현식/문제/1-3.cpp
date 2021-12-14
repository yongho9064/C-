#include <iostream>
int main(){
    using namespace std;

    int n1 = 0;
    int count = 0;

    do{
        cout << "수를 입력하시오:";
        cin >> n1;
        cout << "카운트:" << ++count << endl;
    }while(n1 != 0);

    return 0;
}