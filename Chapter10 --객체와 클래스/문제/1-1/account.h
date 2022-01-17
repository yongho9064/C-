#ifndef ACCOUNT_H_
#define ACCOUNT_H_

#include <string>

class Customer{
private:
     std::string name;
     std::string account;
     int money;
public:
    Customer(std::string name, std::string account, int money);
    void show() const;
    void plus(int m);
    void minus(int m);
};

#endif