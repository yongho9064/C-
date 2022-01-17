#include <iostream>
#include "stock10.h"

// 생성자들
Stock::Stock(){
    std::cout << "디폴트 생성자가 호출되었습니다.\n";
    company = "no name";
    shares = 0;
    shares_val = 0.0;
    total_val = 0.0;
}

Stock::Stock(const std::string& co, long n, double pr){
    std::cout << co << "를 사용하는 생성성가 호출되었습니다.\n";
    company = co;

    if(n < 0){
        std::cerr << "주식 수는 음수가 될 수 없으므로, "
                  << company << " shares를 0으로 설정합니다.\n";
        shares = 0;
    }
    else
        shares = n;
    shares_val = pr;
    set_tot();
}
// 클래스 파괴자
Stock::~Stock(){
    std::cout << "안녕, " << company << "!\n";
}

void Stock::buy(long num,double price){
    if(num < 0){
        std::cout << "매입 주식 수는 음수가 될수 없으므로, "
                  << "거래가 취소되었습니다.\n";
    }else{
        shares += num;
        shares_val = price;
        set_tot();
    }
}

void Stock::sell(long num, double price){
    using std::cout;
    if(num < 0){
        cout << "매도 주식 수는 음수가 될수 없으므로, "
             << "거래가 취소되었습니다.\n";
    }else if(num > shares){
        cout << "보유 주식보다 많은 주식을 매도할수 없으므로, "
             << "거래가 취소되었습니다.\n";
    }else{
        shares -= num;
        shares_val = price;
        set_tot();
    }
}

void Stock::update(double price){
    shares_val = price;
    set_tot();
}

void Stock::show(){
    using std::cout;
    using std::ios_base;

    ios_base::fmtflags orig = cout.setf(ios_base::fixed, ios_base::floatfield);
    std::streamsize prec = cout.precision(3);

    cout << "회사명: " << company
         << "주식 수: " << shares << '\n';
    cout << "주가: $" << shares_val;

    cout.precision(2);
    cout << "주식 총 가치: $" << total_val << '\n';

    // 원본 포맷을 저장한다
    cout.setf(orig, ios_base::floatfield);
    cout.precision(prec);
}