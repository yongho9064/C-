// ����ü �Ű������� ����ϴ� �Լ�
#include <iostream>
#include <cmath>

struct polar{
    double distance;
    double angle;
};

struct rect{
    double x;
    double y;
};

polar rect_to_polar(rect xypos);
void show_polar(polar dapos);

int main(){
    using namespace std;
    rect rplace;
    polar pplace;

    cout << "x���� y���� �Է��Ͻʽÿ�: ";
    while(cin >> rplace.x >> rplace.y){
        pplace = rect_to_polar(rplace);
        show_polar(pplace);
        cout << "x���� y���� �Է��Ͻʽÿ�(�������� q�� �Է�): ";
    }
    cout << "���α׷��� �����մϴ�.\n";
    return 0;
}

polar rect_to_polar(rect xypos){
    using namespace std;
    polar answer;

    answer.distance = sqrt(xypos.x * xypos.x + xypos.y * xypos.y);
    answer.angle = atan2(xypos.y, xypos.x);
    return answer;
}

void show_polar(polar dapos){
    using namespace std;
    const double Rad_to_deg = 57.29577951;

    cout << "�Ÿ� = " << dapos.distance;
    cout << ", ���� = " << dapos.angle * Rad_to_deg;
    cout << "��\n";
}