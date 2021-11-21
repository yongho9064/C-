#include <iostream>
int main(){
    using namespace std;
    int chest = 42;
    int waist = 42;
    int inseam = 42;

    cout << "손님 몸매는 한마디로 끝내 줍니다!" << endl;
    cout << "가슴둘레" << chest << " (10진수)" << endl;
    cout << hex;                                            // 16진법으로 바꾸는 조정자
    cout << "허리둘레 " << waist << " (16진수)" << endl;
    cout << oct;                                            // 8진법으로 바꾸는 조정자
    cout << "인심길이 " << inseam << " (8진수)" << endl;       
    cout << dec;                                            // 10진법으로 바꾸는 조정자

    return 0;
}