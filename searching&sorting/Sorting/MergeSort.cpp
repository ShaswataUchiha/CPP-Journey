#include <iostream>
using namespace std;

void merge(int arr[], int s, int e){
    int m = (s+e)/2;
    
    int leftLen = m - s + 1;
    int rigthLen = e - m;
    
    int* leftArr = new int[leftLen];
    int* rigthArr = new int[rigthLen];
    
    // Copy in left Array
    int k = s;
    for(int i=0; i<leftLen; i++){
        leftArr[i] = arr[k];
        k++;
    }
    
    // Copy in right Array
    k = m+1;
    for(int i=0; i<rigthLen; i++){
        rigthArr[i] = arr[k];
        k++;
    }
    
    //now the sorting
    int leftIndex = 0;
    int rigthIndex = 0;
    int midIndex = s;
    
    while(leftIndex < leftLen && rigthIndex < rigthLen){
        if(leftArr[leftIndex] < rigthArr[rigthIndex]){
            arr[midIndex] = leftArr[leftIndex];
            midIndex++;
            leftIndex++;
        }
        else{
            arr[midIndex] = rigthArr[rigthIndex];
            midIndex++;
            rigthIndex++;
        }
    }
    
    while(leftIndex < leftLen){
        arr[midIndex] = leftArr[leftIndex];
        midIndex++;
        leftIndex++;
    }
    
    while(rigthIndex < rigthLen){
        arr[midIndex] = rigthArr[rigthIndex];
        midIndex++;
        rigthIndex++;
    }
    
    delete[] leftArr;
    delete[] rigthArr;
}

void mergeSort(int arr[], int s, int e){
    if (s >= e)
        return;
    
    int mid = (s+e)/2;
    
    mergeSort(arr, s, mid);
    mergeSort(arr, mid+1, s);
    
    merge(arr, s, e);
}

int main() {
    
    int arr[] = {30,40,50,70,10,20,60};
    int size = 7;
    
    int start = 0;
    int end = size-1;
    
    cout << "Before Merge Sort : " << endl;
    for(int i=0; i<size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    
    mergeSort(arr, start, end);
    
    cout << "After Merge Sort : " << endl;
    for(int i=0; i<size; i++){
        cout << arr[i] << " ";
    }
    

    return 0;
}