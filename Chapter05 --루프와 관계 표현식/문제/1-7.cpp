#include <iostream>
struct car{
    char name[50];
    int year;
};
int main(){
    using namespace std;
    int n = 0;

    cout << "�� ���� ���� ������� �����Ͻðڽ��ϱ�? ";
    cin >> n;

    car * c1 = new car[n];

    for(int i = 0; i < n; i++){
        cout << "�ڵ��� #" << i + 1 << ":\n";
        cout << "���۾�ü: ";
        (cin >> c1[i].name).get();
        cout << "���۳⵵: ";
        cin >> c1[i].year;
    }

    cout << "���� ���ϰ� �����ϰ� �ִ� �ڵ��� ����� ������ �����ϴ�.\n";

    for(int i = 0; i < n; i++)
        cout << c1[i].year << "���� " << c1[i].name << endl;
    
    delete []c1;

    return 0;
}