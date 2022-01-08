#include <iostream>
void time(int,int);
int main(){
    using namespace std;
    
    cout << "시간 값을 입력하시오:";
    int h = 0;
    cin >> h;
    
    cout << "분 값을 입력하시오:";
    int m = 0;
    cin >> m;

    time(h,m);
}
void time(int h,int m){
    std::cout << "시각: " << h << ":" << m << std::endl;
}