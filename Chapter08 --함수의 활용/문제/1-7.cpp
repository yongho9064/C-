// ���ø� �����ε�
#include <iostream>

template <typename T>  // ���ø� A
T SumArray(T arr[], int n);

template <typename T>  // ���ø� B
T SumArray(T* arr[], int n);

struct debts{
    char name[50];
    double amount;
};

int main(){
    using namespace std;
    int things[6] = {13, 31, 103, 301, 310, 130};
    struct debts mr_E[3] = {
        {"Ima Wolfe", 2400.0},
        {"Ura Foxe", 1300.0},
        {"Iby Stout", 1800.0}
    };
    double* pd[3];

// �����͵��� �迭 mr_E�� �ִ� ����ü���� amount ����� �����Ѵ�.
    for (int i = 0; i < 3; i++)
        pd[i] = &mr_E[i].amount;

    cout << "Mr. E�� ��� �հ�: ";
// things�� int���� �迭�̴�
    cout << SumArray(things, 6) << endl;  // ���ø� A�� ����Ѵ�
    cout << "Mr. E�� ä�� ���: ";
// pd�� double���� �����ϴ� �����͵��� �迭�̴�
    cout << SumArray(pd, 3) << endl;  // �� Ư��ȭ�� ���ø� B�� ����Ѵ�
    return 0;
}

template<typename T>
T SumArray(T arr[], int n){
    using namespace std;
    T sum = 0;
    for (int i = 0; i < n; i++)
        sum += arr[i];
    return sum;
}

template<typename T>
T SumArray(T * arr[], int n){
    using namespace std;
    T sum = 0;
    for (int i = 0; i < n; i++)
        sum += *arr[i];
    return sum;
}
