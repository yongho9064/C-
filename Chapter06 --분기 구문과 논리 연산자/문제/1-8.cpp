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
        cout << "파일을 열수없습니다!\n";
        cout << "프로그램을 종료하겠습니다.\n";
        exit(EXIT_FAILURE);
    }

    while(inFile >> ch)
        count++;

    if(inFile.eof())
        cout << "파일의 끝에 도달했습니다.\n";
    else if(inFile.fail())
        cout << "잘못된 데이터!\n";
    else
        cout << "알수없는 오류\n";

    cout << "문자들의 수:" << count << endl;

    inFile.close();

    return 0;
}