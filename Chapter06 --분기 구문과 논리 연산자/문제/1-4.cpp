#include <iostream>
const int SIZE = 100;
struct bop{
    char fullname[SIZE];                // �Ǹ�
    char title[SIZE];                   // ����
    char bopname[SIZE];                 // BOP ���̵�
    int preference;                     // 0 = fullname, 1 = title, 2 = bopname
};
int main(){
    using namespace std;

    char ch;

    bop c1[5] = {
        {"Wimp Macho","CEO","BLUESKY", 0},
        {"Raki Rhodes","Junior Programmer","REDCLOUD", 1},
        {"Celia Laiter","Technical Editor", "MIPS", 2},
        {"Hoppy Hipman","Analyst Trainee", "SWEETY", 1},
        {"Pat Hand","Technical Writer", "LOOPY", 2}
    };

    cout << "a. �Ǹ����� ���� \t\t\t b. �������� ����\n"
         << "c. BOP ���̵�� ���� \t\t\t d. ȸ���� ������ ������ ����\n"
         << "q. ����\n";
    
    cout << "���ϴ� ���� �����Ͻʽÿ�:";
    
    while(cin >> ch){
        switch(ch){
            case 'a': 
                for(int i = 0; i < 5; i++)
                    cout << c1[i].fullname << endl;
                break;
            case 'b':
                for(int i = 0; i < 5; i++)
                    cout << c1[i].title << endl;
                break;
            case 'c':
                for(int i = 0; i < 5; i++)
                    cout << c1[i].bopname << endl;
                break;
            case 'd':
                for(int i = 0; i < 5; i++)
                    cout << c1[i].preference << endl;
                break;
            case 'q':
                cout << "���α׷��� �����մϴ�.\n";
                return 0;
            default:
                cout << "�˼����� ���Դϴ�. �ٽ��Է����ֽÿ�\n";
        }
        cout << "���ϴ� ���� �����Ͻʽÿ�:";
    }
    return 0;
}