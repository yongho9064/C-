#include <iostream>
#include <climits>                  // ������� �ִ밪 �ּҰ�
int main(){
    using namespace std;
    int n_int = INT_MAX;                //climits ���Ͽ� ���ǵ� ��ȣ ���
    short n_short = SHRT_MAX;
    long n_long = LONG_MAX;
    long long n_llong = LLONG_MAX;

    // sizeof �����ڴ� ���������̳� ������ ũ�⸦ �˾Ƴ���
    cout << "int�� " << sizeof(int) << " ����Ʈ�̴�." <<endl;
    cout << "short�� " << sizeof(short) << " ����Ʈ�̴�." << endl;
    cout << "long�� "<< sizeof(long) << " ����Ʈ�̴�." << endl;
    cout << "long long�� " << sizeof(long long) << "����Ʈ�̴�." << endl;

    cout << "�ִ밪" << endl;
    cout<< "int: " << n_int << endl;
    cout << "short: " << n_short << endl;
    cout << "long: " << n_long << endl;
    cout << "long long:" << n_llong << endl;
    cout << "int�� �ּҰ� = " << INT_MIN << endl;
    cout << "char�� ��Ʈ�� = " << CHAR_BIT << endl;

    return 0;
}