#include <iostream>
int main(){
    using namespace std;
    long long world = 0;
    long long usa = 0;

    cout << "���� �α����� �Է��Ͻÿ�:";
    cin >> world;
    cout << "�̱��� �α����� �Է��Ͻÿ�:";
    cin >> usa;

    long double population = (long double) usa / (world / 100);

    cout << "���� �α������� �̱��� �����ϴ� ������ " << population << "%�̴�.";
    return 0;
}