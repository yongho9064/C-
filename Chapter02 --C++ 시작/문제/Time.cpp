#include <iostream>
void time(int,int);
int main(){
    using namespace std;
    
    cout << "�ð� ���� �Է��Ͻÿ�:";
    int h = 0;
    cin >> h;
    
    cout << "�� ���� �Է��Ͻÿ�:";
    int m = 0;
    cin >> m;

    time(h,m);
}
void time(int h,int m){
    std::cout << "�ð�: " << h << ":" << m << std::endl;
}