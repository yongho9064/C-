/* 거리에 대해 마일 단위로 입력을 요구하고, 그것을 킬로미터 단위로 
    환산하는 프로그램을 작성하시오 */

#include <iostream>
int main(){
    using namespace std;

    cout << "마일:";
    int i = 0;
    cin >> i;

    cout << i*1.60934 <<endl;
    
    return 0;
}