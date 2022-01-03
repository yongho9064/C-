#include <iostream>
#include <cstring>
int main(){
    using namespace std;
    const char* arr[] = {"banana apple", "array", "Hello world", "sizeof", "javascript"};

    const char* ptr = arr[0];
    ptr = arr[1];

    cout << ptr << endl;
}