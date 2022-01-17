#include <iostream>
#include "account.h"

Customer::Customer(std::string n, std::string a, int m){
    name = n;
    account = a;
    money = m;
}

void Customer::plus(int m) {
    if(m > 0)
        money += m;
    else
        std::cout << "값을 잘못입력하셨습니다.\n";
}

void Customer::minus(int m){
    if(m > 0)
        money -= m;
    else
        std::cout << "값을 잘못입력하셨습니다.\n";
}

void Customer::show() const{
    std::cout << "예금주: " << name << std::endl;
    std::cout << "계좌 번호: " << account << std::endl;
    std::cout << "잔액: " << money << std::endl;
}

