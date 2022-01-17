#ifndef NAMESP_H_
#define NAMESP_H_
namespace SALES{
    class Sales {
    private:
        static const int QUARTERS = 4;
        double sales[QUARTERS];
        double average;
        double max;
        double min;
    public:
        Sales() {}
        Sales(Sales& s, const double ar[], int n);
        Sales(Sales& s);
        void showSales();
    };
}
#endif