#include <iostream>
#include <climits>                  // 헤더파일 최대값 최소값
int main(){
    using namespace std;
    int n_int = INT_MAX;                //climits 파일에 정의된 기호 상수
    short n_short = SHRT_MAX;
    long n_long = LONG_MAX;
    long long n_llong = LLONG_MAX;

    // sizeof 연산자는 데이터형이나 변수의 크기를 알아낸다
    cout << "int는 " << sizeof(int) << " 바이트이다." <<endl;
    cout << "short는 " << sizeof(short) << " 바이트이다." << endl;
    cout << "long은 "<< sizeof(long) << " 바이트이다." << endl;
    cout << "long long은 " << sizeof(long long) << "바이트이다." << endl;

    cout << "최대값" << endl;
    cout<< "int: " << n_int << endl;
    cout << "short: " << n_short << endl;
    cout << "long: " << n_long << endl;
    cout << "long long:" << n_llong << endl;
    cout << "int의 최소값 = " << INT_MIN << endl;
    cout << "char의 비트수 = " << CHAR_BIT << endl;

    return 0;
}