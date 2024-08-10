#include<iostream>
using namespace std;

void printArray(int arr[], int num) {
    for(int i = 0; i < num; i++) {
        cout << arr[i] << " ";  
    }
    cout << endl; 
}

void reverseArray(int arr[], int num) {
    int i, j;
    for(i = 0, j = num - 1; i < num / 2; i++, j--) {  
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
}

int main() {
    int arr[5] = {6, 4, 5, 2, 1};
    cout << "The array before reversing:" << endl;
    int num = 5;
    printArray(arr, num);
    cout << "The array after reversing:" << endl;
    reverseArray(arr, num);
    printArray(arr, num);
    return 0;
}
