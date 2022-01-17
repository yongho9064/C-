#include <iostream>

using namespace std;
int mmm(){
    cout << "sss" << endl;
}
int main(){
    int (*pf)() = mmm;

    pf();

    return 0;
}