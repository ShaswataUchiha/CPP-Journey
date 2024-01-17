#include <iostream>
using namespace std;

int binarySearch(int arr[], int target, int n){
    int start = 0;
    int end = n-1;
    int mid = start+(end-start)/2;
    
    while(start <= end){
        if(arr[mid] == target){
            return mid;
        }
        else if(target > arr[mid]){
            start = mid + 1;
        }
        else if(target < arr[mid]){
            end = mid - 1;
        }
        mid = start+(end-start)/2;
    }
    return -1;
}

int main() {
    
    int arr[] = {10,20,30,40,50,60,70,80,90};
    int target = 90;
    int n = 9;
    
    int ansIndex = binarySearch(arr, target, n);
    
    if(ansIndex == -1){
        cout << "Index not found" << endl;
    }
    else{
        cout << "Index found at " << ansIndex << endl;
    }

    return 0;
}