#include <iostream>
struct v1{
    int a,b;
};
int main(){
    using namespace std;

    struct v1 s1[] = { {1,2},{3,4} };

    cout << sizeof(s1) << endl;
}