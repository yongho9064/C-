#include <iostream>
#include "namesp.h"
using namespace std;
namespace SALES {

    Sales::Sales(Sales& s, const double ar[], int n) {
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

    void Sales::showSales(){
        for (int i = 0; i < QUARTERS; i++)
            cout << i + 1 << "분기 판매액: " << this->sales[i] << endl;
        cout << "평균값: " << this->average << endl;
        cout << "최대값: " << this->max << endl;
        cout << "최소값: " << this->min << endl;
    }

    Sales::Sales(Sales& s) {

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