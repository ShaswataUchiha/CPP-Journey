#include <iostream>
#include <algorithm>
using namespace std;

void rightShiftArray(int arr[], int size, int k){
    int temp[] = {50,60};

    for(int i=size-1; i>=k; i--){
        arr[i] = arr[i-k];
    }

    for(int i=0; i<2; i++){
        arr[i]=temp[i];
    }
}

int main() {

    int arr[] = {10,20,30,40,50,60};
    int size = 6;
    int val = 2;

    rightShiftArray(arr, size, val);

    for(int i=0; i<size; i++){
        cout << arr[i] << " ";
    }

    return 0;
}