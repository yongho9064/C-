#include <iostream>
#include <stdio.h>
int main(){
    using namespace std;
    int arr[3] = {1, 2, 3};

    int (*pf)[3] = &arr;

    printf("%p \t %p", &arr[1], &(*pf)[1]);
}