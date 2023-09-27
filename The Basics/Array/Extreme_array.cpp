// array is {10 20 30 40 50 60} print like this {10 60 20 50 30 40}

#include <iostream>
#include <algorithm>
using namespace std;

void exteremePrint(int arr[], int size){
    int left = 0;
    int right = size-1;

    while(left <= right){
        if(left == right){
            cout << arr[left] << endl;
        }
        else{
            cout << arr[left] << endl;
            cout << arr[right] << endl;
        }
        left++;
        right--;
    }
}

int main() {

    int arr[6] = {10,20,30,40,50};
    int size = 5;

    exteremePrint(arr, size);

    return 0;
}