#include<iostream>
using namespace std;
int main()
{
	double distance_miles, gasoline_gallons;
	cout << "������ �Ÿ��� ���� ������ �Է��Ͻʽÿ�: ";
	cin >> distance_miles;
	cout << "�Һ��� �ֹ����� ���� ���� ������ �Է��Ͻʽÿ�: ";
	cin >> gasoline_gallons;
	cout << "������ �Ÿ��� " <<  distance_miles << "�����̰�, �Һ��� �ֹ����� " << gasoline_gallons << "�����Դϴ�.\n";
	cout << "����, ������ " << distance_miles / gasoline_gallons << "������ �����߽��ϴ�.\n";
	return 0;
}