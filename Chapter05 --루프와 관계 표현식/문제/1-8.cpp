#include <iostream>
#include <cstring>
int main(){
    using namespace std;
    char arr[500];
    int count = 0;

    cout << "영어 단어들을 입력하십시오(끝내려면 done을 입력):\n";

    do{
        cin >> arr;
        count++;
    }while(strcmp(arr,"done"));

    cout << "총 " << count - 1 << " 단어가 입력되었습니다.";

    return 0;
}