// 클래스 인터페이스
#ifndef STOCK00_H_
#define STOCK00_H_

#include <string>

class Stock{                            // 클래스 선언
    private:
        std::string company;
        long shares;
        double share_val;
        double total_val;
        void set_tot() { total_val = shares * share_val; }
    public:
        void acquire(const std::string& co, long n, double pr);
        void buy(long num, double price);
        void sell(long num, double price);
        void update(double price);
        void show();
};                                      // 끝에 세미콜론이 있는 것에 주의
#endif