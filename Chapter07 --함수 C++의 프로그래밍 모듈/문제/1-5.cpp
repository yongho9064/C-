#include <iostream>
using namespace std;
double factorial(unsigned int num);
int main()
{
	unsigned int num;
	cout << "����� ���� ���� �Է��Ͻʽÿ�(�������� q�� �Է�): ";
	while (cin >> num)
	{
		cout << num << "!�� " << factorial(num) << "�Դϴ�.\n";
		cout << "����� ���� ���� �Է��Ͻʽÿ�(�������� q�� �Է�): ";
	}
	cout << "���α׷��� �����մϴ�.\n";
	return 0;
}

double factorial(unsigned int num)
{
	if (num == 0)
		return 1;
	return num * factorial(num-1);
}