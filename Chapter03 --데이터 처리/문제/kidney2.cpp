#include <iostream>
int main(){
    using namespace std;

    double pete = 0;
    double inch = 0;
    double pound = 0;
    const double INCHES_FEET = 12;
    const double METERS_INCH = 0.0254;
    const double KILOGRAMS_POUND = 2.2;

    cout << "BMI ����" << endl;

    cout << "��Ʈ:";
    cin >> pete;

    cout << "��ġ";
    cin >> inch;

    cout << "�Ŀ��:";
    cin >> pound;

    inch += pete * INCHES_FEET;
    double m = (inch *= METERS_INCH);
    double kg = (pound / KILOGRAMS_POUND);

    cout << "����� BMI:" << kg/(m*m) << endl;
    return 0;
}