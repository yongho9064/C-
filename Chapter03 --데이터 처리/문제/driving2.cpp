#include<iostream>
using namespace std;
int main()
{
	double distance_kilometers, gasoline_liters;
	cout << "������ �Ÿ��� ų�ι��� ������ �Է��Ͻʽÿ�: ";
	cin >> distance_kilometers;
	cout << "�Һ��� �ֹ����� ���� ���� ������ �Է��Ͻʽÿ�: ";
	cin >> gasoline_liters;
	cout << "������ �Ÿ��� " <<  distance_kilometers << "ų�ι����̰�, �Һ��� �ֹ����� " << gasoline_liters << "�����Դϴ�.\n";
	cout << "����, 100ų�ι��ʹ� " << 100 * gasoline_liters/distance_kilometers << "���Ͱ� �Һ�˴ϴ�.\n";
	return 0;
}