#include <iostream>
const double MINS_PER_DEG = 60.0;
const double SECS_PER_MIN = 60.0;
int main()
{
	using namespace std;

	int degrees;
	int minutes;
	int seconds;
	double latitude;

	cout << "������ ��, ��, �� ������ �Է��Ͻÿ�:\n";
	cout << "����, ������ �Է��Ͻÿ�: ";
	cin >> degrees;
	cout << "������, �а��� �Է��Ͻÿ�: ";
	cin >> minutes;
	cout << "������, �ʰ��� �Է��Ͻÿ�: ";
	cin >> seconds;
	latitude = degrees + (minutes + seconds / SECS_PER_MIN)/MINS_PER_DEG;
	cout << degrees << "��, " << minutes << "��, "
		 << seconds << "�� = " << latitude << "��\n";
	return 0;
}