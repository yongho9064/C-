#include <iostream>
int main(){
    using namespace std;
    double income = 0.0;
    double tvarp = 0.0;

    cout << "�ҵ��� �Է��Ͻÿ�:";

    while(cin >> tvarp && 0 < tvarp){

       if (tvarp <= 5000)
			income = 0.0;
		else if (tvarp <= 15000)
			income = (tvarp - 5000) * 0.1;
		else if (tvarp <= 35000)
			income = 10000 * 0.1 + (tvarp - 15000) * 0.15;
		else
			income = 10000 * 0.1 + 20000 * 0.15 + (tvarp - 35000) * 0.2;

        cout << "�ҵ漼�� " << income << "�Դϴ�.\n";
        cout << "�ҵ��� �Է��Ͻÿ�:";
    }
    cout << "����" << endl;
}