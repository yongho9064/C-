#include <iostream>
int main()
{
    using namespace std;
    
	int height;
	const int METER = 100;

	cout << "Ű�� ������ ��Ƽ���� ������ �Է��Ͻʽÿ�: ___\b\b\b";
	cin >> height;
	cout << "����� Ű�� " << height/METER << "���� " << height%METER << "��Ƽ�����Դϴ�.\n";
	return 0;
}