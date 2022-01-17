#ifndef STOCK10_H_
#define STOCK10_H_
#include <string>

class Stock{
    private:
        std::string company;
        long shares;
        double shares_val;
        double total_val;
        void set_tot() { total_val = shares * shares_val; }
    public:
        Stock();                                        // 디폴트 생성자
        Stock(const std::string& co, long n = 0, double pr = 0.0);
        ~Stock();
        void buy(long num, double price);
        void sell(long num, double price);
        void update(double price);
        void show();
};
#endif