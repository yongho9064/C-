#include <iostream>
#include <fstream>
#include <cstdlib>
int main(){
    using namespace std;

    char ch;
    int count = 0;
    ifstream inFile;

    inFile.open("1-8.txt");

    if(!(inFile.is_open())){
        cout << "������ ���������ϴ�!\n";
        cout << "���α׷��� �����ϰڽ��ϴ�.\n";
        exit(EXIT_FAILURE);
    }

    while(inFile >> ch)
        count++;

    if(inFile.eof())
        cout << "������ ���� �����߽��ϴ�.\n";
    else if(inFile.fail())
        cout << "�߸��� ������!\n";
    else
        cout << "�˼����� ����\n";

    cout << "���ڵ��� ��:" << count << endl;

    inFile.close();

    return 0;
}