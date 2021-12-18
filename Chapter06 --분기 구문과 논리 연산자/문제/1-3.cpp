#include <iostream>
int main(){
    using namespace std;
    char ch;

     cout << "다음 선택 사항 중에서 하나를 선택하십시오. (끝내려면 q)\n"
             << "c) camera \t p)pianist\n"
             << "t) tree \t g) game\n";

    while(cin >> ch && ch != 'q'){
        switch(ch){
            case 'c': cout << "카메라를 켰습니다.\n"; break;
            case 'p': cout << "당신은 피아니스트\n"; break;
            case 't': cout << "단풍나무는 잎이 별처럼 생겼습니다.\n"; break;
            case 'g': cout << "게임을 켰습니다.\n"; break;
            default: cout << "c, p, t, g 중에서 하나를 선택하십시오. (끝내려면 q):";
        }
    }
    return 0;
}