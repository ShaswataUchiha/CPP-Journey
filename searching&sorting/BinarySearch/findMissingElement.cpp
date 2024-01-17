#include <iostream>
using namespace std;

int findMisingElement(int arr[], int n){
    int s = 0;
    int e = n-1;
    int mid = s+(e-s)/2;
    int ans;
    
    while(s <= e){
        int diff = arr[mid] - mid;  
        
        if(diff == 1){
            s = mid+1;
        }
        else{
            ans = mid;
            e = mid-1;
        }
        mid = s+(e-s)/2;
    }
    return ans+1;
}

int main() {
    int arr[] = {1,2,3,4,6,7,8,9};
    int size = 8;
    
    cout << "Mising element is : " << findMisingElement(arr, size);
    
   return 0;
}