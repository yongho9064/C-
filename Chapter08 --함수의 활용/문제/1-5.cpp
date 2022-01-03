#include <iostream>
using namespace std;
const int Size = 5;
template <class T>
T max5(T a[]);
int main(){
    int a[Size] = {4, 2, 5, 1, 3};
    double b[Size] = {1.2, 5.3, 2.2, 6.8, 0.8};

    int imax = max5(a);
    double dmax = max5(b);

    cout << "int형 큰값:" << imax << endl;
    cout << "double형 큰값:" << dmax << endl;

    return 0;
}
template<class T>
T max5(T a[]){
    T max = a[0];

    for (int i = 1; i < Size; i++)
        if(max < a[i])
            max = a[i];

    return max;
}