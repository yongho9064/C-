#include <iostream>
#include <string>
int main(){
    using namespace std;
    int count = 0;
    string arr;

    cout << "영어 단어들을 입력하십시오(끝내려면 done을 입력):\n";
    
    while (cin >> arr && arr != "done")
        count++;

    cout << "총 " << count << " 단어가 입력되었습니다.";
    return 0;
}