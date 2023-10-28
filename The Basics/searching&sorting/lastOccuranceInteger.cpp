#include <iostream>
using namespace std;

int lastOccurance(int arr[], int n, int target){
    int start = 0;
    int end = n-1;
    int ans = -1;
    int mid = start+(end-start)/2;
    
    while(start <= end){
        if(arr[mid] == target){
            ans = mid;
            start = mid + 1;
        }
        else if(target > arr[mid]){
            start = mid + 1; 
        }
        else if(target < arr[mid]){
            end = mid - 1; 
        }
        mid = start+(end-start)/2;
    }
    return ans;
}

int main() {
    int arr[] = {10,20,30,30,30,30,30,80,90};
    int size = 9;
    int target = 30;
   
    int ans = lastOccurance(arr, size, target);
    
    if(ans == -1){
        cout << "Element is nor foud";
    }
    else{
        cout << "Last position of target is : " << ans;
    }
    
   return 0;
}