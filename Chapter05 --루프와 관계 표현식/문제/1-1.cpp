#include <iostream>
int main(){
    using namespace std;

    int num1, num2;
    int sum = 0;

    cout << "두개의 정수를 입력하시오:";
    cin >> num1 >> num2;

    for(int i = num1; i <= num2; i++)
        sum += i;

    cout << "합계:" << sum << endl;

    return 0;
}