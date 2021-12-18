// if else 구문
#include <iostream>
int main(){
    char ch;

    std::cout << "타이핑하시면, 반복 수행하겠습니다.\n";
    std::cin.get(ch);

    while(ch != '.'){
        if(ch == '\n')
            std::cout << ch;            // 개행 문자일 떄 수행
        else
            std::cout << ch;          // 그 밖의 문자일 떄 수행
        std::cin.get(ch);
    }

    std::cout << "\n혼란스럽게 해서 죄송합니다.\n";

    return 0;
}