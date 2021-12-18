#include <iostream>
const int SIZE = 100;
struct bop{
    char fullname[SIZE];                // 실명
    char title[SIZE];                   // 직함
    char bopname[SIZE];                 // BOP 아이디
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

    cout << "a. 실명으로 열람 \t\t\t b. 직함으로 열람\n"
         << "c. BOP 아이디로 열람 \t\t\t d. 회원이 지정한 것으로 열람\n"
         << "q. 종료\n";
    
    cout << "원하는 것을 선택하십시오:";
    
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
                cout << "프로그램을 종료합니다.\n";
                return 0;
            default:
                cout << "알수없는 값입니다. 다시입력해주시오\n";
        }
        cout << "원하는 것을 선택하십시오:";
    }
    return 0;
}