#include <iostream>
int main(){
    using namespace std;
    int yams[3];                            // 3���� ���Ҹ� ���� �迭�� �����Ѵ�.
    yams[0] = 7;                            // ù ���� ���ҿ� ���� �����Ѵ�.
    yams[1] = 8;                       
    yams[2] = 6;

    int yamcosts[3] = {200,300,50};         // �迭�� �����ϰ� �ʱ�ȭ�Ѵ�.
    // ����: ����ϴ� C++ �����Ϸ��� �����Ⱑ �� �迭�� �ʱ�ȭ�� �� ���ٸ�
    // int yamcosts[3] ��ſ� static int yamcosts[3]�� ����϶�

    cout << "���� �հ� = ";
    cout << yams[0] + yams[1] + yams[2] << endl;
    cout << yams[1] << "���� ��� �ִ� ������ ";
    cout << "���� " << yamcosts[1] << "�����Դϴ�. \n";

    int total = yams[0] * yamcosts[0] + yams[1] * yamcosts[1];
    total = total + yams[2] * yamcosts[2];

    cout << "�� ������ �� ������ " << total << "���Դϴ�.\n";
    cout << "\nyams �迭�� ũ��� " << sizeof(yams);
    cout << "����Ʈ�Դϴ�. \n";
    cout << "���� �ϳ��� ũ��� " << sizeof (yams[0]);
    cout << "����Ʈ�Դϴ�. \n";
    return 0;
}