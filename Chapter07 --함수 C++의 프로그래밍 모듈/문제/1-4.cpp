#include <iostream>
using namespace std;
// ����: � C++������ long double�� ��ſ� double���� ����ؾ� �Ѵ�
long double odds(unsigned numbers, unsigned picks);	// �Լ� ����
int main()
{
	double total, choices;
	long double firstodds, secondodds = 0.0;
	cout << "1ȸ��: ��ü ���� ������ ���� ���� ������ �Է��Ͻʽÿ�: ";
	if ((cin >> total >> choices) && choices <= total)
	{
		firstodds = odds(total, choices);		// 1ȸ�� �·��� ����Ѵ�
		cout << "2ȸ��: ��ü ���� ������ ���� ���� ������ �Է��Ͻʽÿ�: ";
		if ((cin >> total >> choices) && choices <= total)
		{
			secondodds = odds(total, choices);	// 2ȸ�� �·��� ����Ѵ�
			cout << "����� �׶������� Ż �·��� " << firstodds * secondodds << "���� �õ��� �� ���Դϴ�.\n";
		}
	}
	cout << "���α׷��� �����մϴ�.\n";
	return 0;
}

// �� �Լ��� numbers���� �� �߿���
// picks���� ���� ��Ȯ�ϰ� ���� Ȯ���� ����Ѵ�
long double odds(unsigned numbers, unsigned picks)
{
	long double result = 1.0;	// �� �ڸ����� ���� �������� �´�
	long double n;
	unsigned p;

	for (n = numbers, p = picks; p > 0; n--, p--)
		result = result * n / p ;
	return result;
}