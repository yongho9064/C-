#include <iostream> 
int fahrenheit(int);
int main(){
    using namespace std;
    int celsius = 0;

    cout << "¼·¾¾ ¿Âµµ¸¦ ÀÔ·ÂÇÏ°í Enter Å°¸¦ ´©¸£½Ê½Ã¿À:";
    cin >> celsius;

    int i = fahrenheit(celsius);
    cout << "¼·¾¾ " << celsius <<"µµ´Â È­¾¾·Î " << i << "µµÀÔ´Ï´Ù.";

    return 0;
}
int fahrenheit(int i){
    return 1.8 * i + 32.0;
}