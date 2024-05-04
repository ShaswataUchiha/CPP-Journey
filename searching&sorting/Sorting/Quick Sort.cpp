#include <iostream>
using namespace std;

void quickSort(int arr[], int start, int end){
   
    if(start >= end) return;
    int i = start-1;
    int j = start;
    int pivot = end;
    
    while(j < pivot){
        if(arr[j] < arr[pivot]){
            ++i; 
            swap(arr[i], arr[j]);
        }
        j++;
    }
    
    ++i;
    swap(arr[i], arr[pivot]);
    
    quickSort(arr, start, i-1);
    quickSort(arr, i+1, end);
}   

int main() {
    
    // int arr[] = {7,2,1,8,6,3,5,4};
    int arr[] = {3,5,8,1,4,9,2,5};
    int size = 8;
    int start = 0;
    int end = size-1;
    
    cout << "Before Quick Sort" << endl;
    for(int i=0; i<size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
     
    quickSort(arr, start, end);
    
    cout << "Afettr quick Sort" << endl;
    for(int i=0; i<size; i++){
        cout << arr[i] << " ";
    }
    return 0;
}