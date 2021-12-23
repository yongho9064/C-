#include <iostream>
using namespace std;
struct box{
    char maker[40];
    float height;
    float width;
    float length;
    float volume;
};

void b1(const box a);
void b2(box *b);
int main(){
    box a = {"Technical Communication Laboratory", 10.5, 20.5, 30.5, 0};

    b1(a);
    b2(&a);
    b1(a);

    return 0;
}
void b1(const box a){
    cout << "maker: " << a.maker << endl;
    cout << "height: " << a.height << endl;
    cout << "width: " << a.width << endl;
    cout << "length: " << a.length << endl;
    cout << "volume: " << a.volume << endl;
    cout << endl
         << endl;
}
void b2(box *a){
    a->volume = a->height * a->width * a->length;
}