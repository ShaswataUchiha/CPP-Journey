#include <iostream>
using namespace std;

int firstOccurance(int arr[], int target, int n){
    int s=0;
    int e=n-1;
    int mid = (s+e)/2;
    int ans = -1;
    
    while(s <= e){
        if(arr[mid] == target){
            ans = mid;
            e = mid-1;
        }
        else if(target > arr[mid]){
            s = mid +1;
        }
        else if(target < arr[mid]){
            e = mid -1;
        }
        mid = s+(e-s)/2;
    }
    return ans;
    
}


int main() {
    
    int arr[] = {10,20,30,30,30,40,50,60,70};
    int target = 30;
    int n = 9;
    
    int ansIndex = firstOccurance(arr, target, n);
    
    if(ansIndex == -1){
        cout << "Index not found" << endl;
    }
    else{
        cout << "Index found at (first occurance) " << ansIndex << endl;
    }

    return 0;
}