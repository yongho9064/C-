// pe08-01.cpp
#include <iostream>
using namespace std;
void print_str(char * str, int count = 0);
const int ArSize = 20;
int main()
{
	char myStr[ArSize];

	cout << "����� ���ڿ��� �Է��Ͻʽÿ�:\n";
	cin.getline(myStr, ArSize);

	print_str(myStr);			// 1�� ° ȣ��
	print_str(myStr, 0);			// 2�� ° ȣ��
	print_str(myStr, 100);			// 3�� ° ȣ��

	cout << "for������ �Լ��� �� �� ȣ���Ѵ�:\n";
	for (int i = 0; i < 3; i++)
		print_str(myStr);		// 4, 5, 6�� ° ȣ��

	print_str(myStr);			// 7�� ° ȣ��
	print_str(myStr, 300);			// 8�� ° ȣ��
	return 0;
}

void print_str(char * str, int count)
{
	static int called = 0;

	if (count == 0)		// �� ��° �������ڰ� 0�̸� ����ó�� ���ڿ��� �� ���� ����Ѵ�
	{
		called++;
		cout << called << "�� ° ȣ��: " << str << endl;
	}
	else			// �� �������� �Լ��� ȣ��� Ƚ����ŭ ����Ѵ�
	{
		called++;
		for (int i = 0; i < called; i++)
			cout << called << "�� ° ȣ��: " << str << endl;
	}
}