#include <iostream>
using namespace std;
const int Size = 10;
int input(int arr[], const int Size);
void output(const int arr[], const int end);
void result(const int arr[], const int end);
int main(){
    int arr[Size];
    cout << "끝내려면 q를 입력하시오.\n";
    
    int count = input(arr, Size);
    output(arr, count);
    result(arr, count);

    return 0;
}
int input(int arr[], const int Size){
    int i;
    for (i = 0; i < Size; i++){
        cout << "스코어 #" << i + 1 << ": ";
        if(!(cin >> arr[i]))
            break;
    }
    return i;
}
void output(const int arr[], const int end){
    for (int i = 0; i < end; i++)
        cout << arr[i] << "\t";
    cout << endl;
}
void result(const int arr[], const int end){
    int sum = 0;
    for (int i = 0; i < end;i++){
        sum += arr[i];
    }
    cout << "평균 스코어: " << sum / end << endl;
}