#include <iostream>
#include "namesp.h"
using namespace std;
namespace SALES{

    void setSales(Sales & s, const double ar[], int n){
        double sum = 0.0;

        for(int i = 0; i< QUARTERS; i++){
            s.sales[i] = ar[i];
            sum += s.sales[i];
        }

        s.max = s.sales[0];
        s.min = s.sales[0];

        for (int i = 1; i < n; i++){
            if(s.max < s.sales[i])
                s.max = s.sales[i];
            if(s.min > s.sales[i])
                s.min = s.sales[i];
        }

        s.average = sum / QUARTERS;
    }

    void showSales(const Sales & s){
        for (int i = 0; i < QUARTERS; i++)
            cout << i + 1 << "분기 판매액: " << s.sales[i] << endl;
        cout << "평균값: " << s.average << endl;
        cout << "최대값: " << s.max << endl;
        cout << "최소값: " << s.min << endl;
    }

    void setSales(Sales & s){

        s.average = s.max = s.min = 0.0;
        
        double ar[4];
        double sum = 0.0;

        cout << "판매사원 B의 분기별 판매액(입력)" << endl;

        for (int i = 0; i < QUARTERS; i++){
            cout << i + 1 << "분기 판매액: ";
            cin >> ar[i];
            s.sales[i] = ar[i];
            sum += s.sales[i];
        }

        s.max = s.sales[0];
        s.min = s.sales[0];

        for (int i = 1; i < QUARTERS; i++){
            if(s.max < s.sales[i])
                s.max = s.sales[i];
            if(s.min > s.sales[i])
                s.min = s.sales[i];
        }

        s.average = sum / QUARTERS;

    }
}