#include <iostream>
#include <algorithm>
using namespace std;

void rightShiftArray(int arr[], int size){
    int temp = arr[size-1];

    for(int i=size-1; i>=1; i--){
        arr[i] = arr[i-1];
    }

    arr[0] = temp;
}

int main() {

    int arr[] = {10,20,30,40,50,60};
    int size = 6;

    rightShiftArray(arr, size);

    for(int i=0; i<size; i++){
        cout << arr[i] << " ";
    }

    return 0;
}