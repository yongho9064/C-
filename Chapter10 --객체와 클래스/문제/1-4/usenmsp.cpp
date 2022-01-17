#include <iostream>
#include "namesp.h"
const int Size = 4;
int main(){
    using namespace std;
    SALES::Sales s;
    double ar[Size] = { 100.11, 200.22, 300.33, 400.44 };
    SALES::Sales(s, ar, Size);
    s.showSales();

    SALES::Sales b(s);
    s.showSales();
    
    return 0;
}