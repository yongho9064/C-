#include <iostream>
const int Size = 10;
using namespace std;

int Fill_array(double arr[], const int Size);
void Show_array(const double arr[], const int end);
void Reverse_array(double arr[], int end);
int main(){
    double arr[Size];

    int count = Fill_array(arr, Size);
    Show_array(arr, count);
    Reverse_array(arr, count - 1);
    Show_array(arr, count);

    return 0;
}
int Fill_array(double arr[], const int Size){
    int count = 0;
    
    cout << "�迭�� ������ double�� ���� �Է��Ͻÿ�(�������� ���ڰ� �ƴѰ��� �Է�)\n";
    for (int i = 0; i < Size; i++){
        cin >> arr[i];
        if(!cin)
            break;
        count++;
    }
    return count;
}
void Show_array(const double arr[], const int end){
    for (int i = 0; i < end; i++)
        cout << i + 1 << "#����: " << arr[i] << endl;
    cout << "\n\n";
}
void Reverse_array(double arr[], int end){
    int temp;
    for (int i = 1; i < end - 1; i++, end--) {
        temp = arr[i];
        arr[i] = arr[end - 1];
        arr[end - 1] = temp;
    }
}