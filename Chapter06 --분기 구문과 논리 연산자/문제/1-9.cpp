#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>
struct donator{
    std::string name;
    double money;
};
int main(){
    using namespace std;
    ifstream inFile;
    int n;

    inFile.open("1-9.txt");

    if(!(inFile.is_open())){
        cout << "������ ���������ϴ�!\n";
        cout << "�ý����� �����ϰڽ��ϴ�.\n";
        exit(EXIT_FAILURE);
    }

    cout << "����� ����� ���� �ΰ���?:";
    (inFile >> n).get();
    cout << n << endl;

    donator * c1 = new donator[n];

    for(int i = 0; i < n; i++){
        cout << "������� �̸�:";
        getline(inFile,c1[i].name);
        cout << c1[i].name << endl;

        cout << "��α�:";
        (inFile >> c1[i].money).get();
        cout << c1[i].money << endl;
    }

    if(0 == n)
        cout << "����ڰ� �����ϴ�.\n";

    cout << "------��� �����-------\n";

    for(int i = 0; i < n; i++)
        if(c1[i].money >= 10000){
            cout << "�����:" << c1[i].name;
            cout << " ��α�:" << c1[i].money << endl;
        }
    
    cout << "------�Ҿ� �����-------\n";

    for(int i = 0; i < n; i++)
        if(c1[i].money < 10000){
            cout << "�����:" << c1[i].name;
            cout << " ��α�:" << c1[i].money << endl;
        }

    delete []c1;

    return 0;
}