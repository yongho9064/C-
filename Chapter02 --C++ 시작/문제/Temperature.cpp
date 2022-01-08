#include <iostream> 
int fahrenheit(int);
int main(){
    using namespace std;
    int celsius = 0;

    cout << "섭씨 온도를 입력하고 Enter 키를 누르십시오:";
    cin >> celsius;

    int i = fahrenheit(celsius);
    cout << "섭씨 " << celsius <<"도는 화씨로 " << i << "도입니다.";

    return 0;
}
int fahrenheit(int i){
    return 1.8 * i + 32.0;
}