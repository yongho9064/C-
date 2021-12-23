#include <iostream>
using namespace std;
const int Max = 5;

// �Լ� ����
double * fill_array(double * begin, double * end);
void show_array(const double * begin, const double * end); 	// �����͸� ��ȣ�Ѵ�
void revalue(double * begin, double * end);

int main()
{
	double properties[Max];

	double * end = fill_array(properties, properties + Max);
	show_array(properties, end);
	revalue(properties, end);
	show_array(properties, end);
	cout << "���α׷��� �����մϴ�.\n";
	return 0;
}

double * fill_array(double * begin, double * end)
{
	double temp;
	double * pt;
	int i = 0;
	for (pt = begin; pt < end; pt++)
	{
		cout  << ++i << "�� �ε����� ����: $";
		cin >> temp;
		if (!cin)		// �Է� �ҷ�
		{
			cin.clear();
			while (cin.get() != '\n')
				continue;
			cout << "�Է� �ҷ�; �Է� ������ �����ڽ��ϴ�.\n";
			break;
		}
		else if (temp < 0)	// ���� Ż���� ���� ���� ��
			break;
			
		*pt = temp;
	}
	return pt;
}

// ���� �Լ��� �迭�� ����� ���� ������, ������ ���� ����
void show_array(const double * begin, const double * end)
{
	const double * pt;
	int i = 0;
	for (pt = begin; pt != end; pt++)
	{
		cout << ++i << "�� �ε���: $";
		cout << *pt << "\n";
	}
}

// �迭�� �� ���ҿ� ������ factor�� ���Ѵ�
void revalue(double * begin, double * end)
{
	double * pt;
	cout << "�������� �Է��Ͻʽÿ�: ";
	double factor;
	cin >> factor;
	for (pt = begin; pt != end; pt++)
		*pt *= factor;
}