// ������ ����ü
#include <iostream>
struct inflatable{
    char name[20];
    float volume;
    double price;
};
int main(){
    using namespace std;
    inflatable guest = {
        "Glorious Gloria",  // name ��
        1.88,               // volume ��
        29.99               // price ��
    };                      // guest�� inflatable���� ����ü �����̴�

    inflatable pa1 = {
        "Audacious Arthur",
        3.12,
        32.99
    };                      // pa1�� inflatable���� �� ���� �����̴�
    // ����: � C++ �ý��ۿ����� ������ ���� ������ �䱸�Ѵ�
    // static inflatable guest = 

    cout << "���� �Ǹ��ϰ� �ִ� ����ǳ����\n" << guest.name;
    cout << "�� " << pa1.name << "�Դϴ�.\n";
    //pa1.name�� pa1 ������ name ����̴�
    cout << "�� ��ǰ�� $";
    cout << guest.price + pa1.price << "�� �帮�ڽ��ϴ�!\n";
    return 0;
}