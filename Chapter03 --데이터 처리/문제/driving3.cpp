#include<iostream>
using namespace std;
int main()
{
	const double MILES_100KM = 62.14;
	const double LITERS_GALLON = 3.875;
	double liters_100km, mpg;
	cout << "���� ��Ÿ���� 100ų�ι��ʹ� ���� ���� ���� �Ÿ��� �Է��Ͻʽÿ�: ";
	cin >> liters_100km;
	mpg = MILES_100KM * LITERS_GALLON / liters_100km;
	cout << "�̱� ��Ÿ�Ϸ� ���� �Ÿ��� ������ " << mpg << "�����Դϴ�\n";
	return 0;
}