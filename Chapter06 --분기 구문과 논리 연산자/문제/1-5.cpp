#include <iostream>
int main(){
    using namespace std;
    double income = 0.0;
    double tvarp = 0.0;

    cout << "소득을 입력하시오:";

    while(cin >> tvarp && 0 < tvarp){

       if (tvarp <= 5000)
			income = 0.0;
		else if (tvarp <= 15000)
			income = (tvarp - 5000) * 0.1;
		else if (tvarp <= 35000)
			income = 10000 * 0.1 + (tvarp - 15000) * 0.15;
		else
			income = 10000 * 0.1 + 20000 * 0.15 + (tvarp - 35000) * 0.2;

        cout << "소득세는 " << income << "입니다.\n";
        cout << "소득을 입력하시오:";
    }
    cout << "종료" << endl;
}