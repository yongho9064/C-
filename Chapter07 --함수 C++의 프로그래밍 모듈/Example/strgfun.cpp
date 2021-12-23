#include <iostream>
unsigned int c_in_str(const char* str, char ch);
int main(){
    using namespace std;
    char mmm[15] = "minimum";

    const char* wail = "ululate";

    unsigned int ms = c_in_str(mmm, 'm');
    unsigned int us = c_in_str(wail, 'u');
    cout << mmm << "에는 m이 " << ms << "개 들어 있습니다.\n";
    cout << wail << "에는 u가 " << us << "개 들어 있습니다.\n";
    return 0;
}
unsigned int c_in_str(const char * str, char ch){
    int count = 0;

    while(*str){                                         // *str가 '\0'이면 루프를 탈출한다
        if(*str == ch)
            count++;
        str++;                                           // 포인터를 다음 문자로 이동
    }
    return count;
}