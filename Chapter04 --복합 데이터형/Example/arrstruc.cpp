// ����ü�� �迭
#include <iostream>
struct inflatable{
    char name[20];
    float volume;
    double price;
};
int main(){
    using namespace std;
    inflatable guests[2] ={                             // ����ü�� �迭 �ʱ�ȭ
        {"Bambi", 0.5, 21.99},                          // �迭�� �ִ� ù ��° ����ü
        {"Godzilla", 2000, 565.99}                      // �迭�� �ִ� �� ���� ����ü
    };

    cout << guests[0].name << "�� " << guests[1].name
         << "�� ���Ǹ� ���ϸ�\n"
         << guests[0].volume + guests[1].volume
         << " ��������Ʈ�Դϴ�.\n";
    return 0;        
}