#include <iostream>
#include <cctype>
#include <string>
int main(){
    using namespace std;

    string str1;
    int vowels = 0;
    int consonants = 0;
    int etc = 0;
    int count = 0;

    cout << "�ܾ���� �Է��Ͻÿ� (�������� q):\n"; 

    while(cin >> str1 && str1 != "q"){
        if(isalpha(str1[0])){
            switch(str1[0]){
                case 'a':
                case 'A': vowels++; break;
                
                case 'e':
                case 'E': vowels++; break;

                case 'i':
                case 'I': vowels++; break; 

                case 'o':
                case 'O': vowels++; break;

                case 'u':
                case 'U': vowels++; break;

                default: consonants++;
            }
        }else{
            etc++;
        }
    }

    cout << "�������� �����ϴ� �ܾ� ��: " << vowels << endl;
    cout << "�������� �����ϴ� �ܾ� ��: " << consonants << endl;
    cout << "��Ÿ: " << etc << endl;

    return 0;
}