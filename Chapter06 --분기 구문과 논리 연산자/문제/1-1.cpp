#include <iostream>
#include <cctype>
int main(){
    using namespace std;

    char ch;

    while(cin.get(ch) && ch != '@'){
        if(islower(ch))
            cout << char(toupper(ch));
        else if(isupper(ch))
            cout << char(tolower(ch));
        else
            cout << ch;
    }
}