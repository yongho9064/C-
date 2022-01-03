#include <iostream>
using namespace std;
#include <cstring>		// strlen()�� ����ϱ� ����

template <typename T>
T maxn(T arr[], int count);

template <> char * maxn(char * pstr[], int count);	// Ư��ȭ

int main()
{
	int ints[6] = { 123, 431, 231, 560, 323, 212 };
	double dbls[4] = { 3.71, 5.84, 37.8, 5.59 };
	char * pstr[5] = 
	{
		"Seong-il Yoon",
		"Technical Communication Laboratory",
		"Technical Editor",
		"C++ Primer Plus Fourth Edition",
		"Correctness is another name of TCL"
	};
	cout << "���� ū int ��: " << maxn(ints, 6) << endl;
	cout << "���� ū double ��: " << maxn(dbls, 4) << endl;
	cout << "���� �� ���ڿ�: " << maxn(pstr, 5) << endl;
	return 0;
}

template <typename T>
T maxn(T arr[], int count)
{
	T max = arr[0];
	for (int i = 1; i < count; i++)
	{
		if (arr[i] > max)
			max = arr[i];
	}
	return max;
}

template <> char * maxn(char * pstr[], int count)
{
	char * maxpt = pstr[0];
	for (int i = 1; i < count; i++)
	{
		if (strlen(pstr[i]) > strlen(maxpt))
			maxpt = pstr[i];
	}
	return maxpt;
}