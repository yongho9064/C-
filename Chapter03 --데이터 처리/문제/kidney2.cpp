#include <iostream>
int main(){
    using namespace std;

    double pete = 0;
    double inch = 0;
    double pound = 0;
    const double INCHES_FEET = 12;
    const double METERS_INCH = 0.0254;
    const double KILOGRAMS_POUND = 2.2;

    cout << "BMI 계산기" << endl;

    cout << "피트:";
    cin >> pete;

    cout << "인치";
    cin >> inch;

    cout << "파운드:";
    cin >> pound;

    inch += pete * INCHES_FEET;
    double m = (inch *= METERS_INCH);
    double kg = (pound / KILOGRAMS_POUND);

    cout << "당신의 BMI:" << kg/(m*m) << endl;
    return 0;
}